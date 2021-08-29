/*
 * Copyright (C) 2021 Zoe Knox <zoe@pixin.net>
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */


#include "sysmenu.h"
#include "version.h"
#include <sys/types.h>
#include <sys/sysctl.h>
#include <QDebug>
#include <QDBusMessage>
#include <QDBusPendingCall>
#include <KRecentDocument>
#import <CoreFoundation/CoreFoundation.h>
#import <LaunchServices/LaunchServices.h>

AXMessageBox::AXMessageBox()
    : QMessageBox()
{
}

void AXMessageBox::closeEvent(QCloseEvent *event)
{
    this->done(0);
}

AiryxMenu::AiryxMenu(QObject *parent, const QVariantList &args)
    : Plasma::Applet(parent, args)
    , m_dbus(QDBusConnection::sessionBus())
{
    m_about = NULL;
    graphicsAdaptors();
    productName();
}

AiryxMenu::~AiryxMenu()
{
}

unsigned int AiryxMenu::numCPUs()
{
    int mib[2];
    unsigned int cpus;
    size_t len;

    mib[0] = CTL_HW;
    mib[1] = HW_NCPU;
    len = sizeof(cpus);
    sysctl((const int *)mib, 2, &cpus, &len, NULL,	0);
    return cpus;
}

unsigned long AiryxMenu::realMemory()
{
    int mib[2];
    unsigned long mem;
    size_t len;

    mib[0] = CTL_HW;
    mib[1] = HW_REALMEM;
    len = sizeof(mem);
    sysctl((const int *)mib, 2, &mem, &len, NULL,	0);
    return mem;
}

QString AiryxMenu::formatAsGB(unsigned long bytes)
{
    double gb = (double)bytes;
    gb /=  (1024.0 * 1024.0 * 1024.0);
    return QString::asprintf("%.0f GB", gb);
}

QString AiryxMenu::CPUModel()
{
    int mib[2];
    char model[128];
    size_t len;

    mib[0] = CTL_HW;
    mib[1] = HW_MODEL;
    len = sizeof(model)*sizeof(char);
    sysctl((const int *)mib, 2, model, &len, NULL,	0);
    return QString(model);
}

QStringList AiryxMenu::graphicsAdaptors()
{
    if(!m_adaptorsFound.isEmpty())
        return m_adaptorsFound;

    QStringList cards;
    for(int x = 0; x < 2; ++x)
        cards << QString::asprintf("vgapci%d", x);
    
    for(QStringList::iterator iter = cards.begin(); iter != cards.end(); iter++) {
        QProcess *pciconf = new QProcess(this);
        connect(pciconf, SIGNAL(finished(int, QProcess::ExitStatus)), this, SLOT(processFinished(int, QProcess::ExitStatus)));
        connect(pciconf, SIGNAL(readyReadStandardOutput()), this, SLOT(pciconfOutputReady()));

        pciconf->start("/usr/sbin/pciconf", QStringList() << "-lv" << *iter);
    }

    return m_adaptorsFound;
}

void AiryxMenu::pciconfOutputReady()
{
    QProcess *p = (QProcess *)sender();
    QByteArray output = p->readAllStandardOutput();

    if(output.contains("vendor")) {
        QList<QByteArray> lines = output.split('\n');
        QByteArray vendor = lines[1].mid(lines[1].indexOf('\'')+1, -1);
        vendor.chop(1);
        QByteArray device = lines[2].mid(lines[2].indexOf('\'')+1, -1);
        device.chop(1);
        m_adaptorsFound << QString::asprintf("%s %s", vendor.constData(), device.constData());
    }
}

void AiryxMenu::processFinished(int exitCode, QProcess::ExitStatus exitStatus)
{
    QProcess *p = (QProcess *)sender();
    delete p;
}

QString AiryxMenu::hostUUID()
{
    int mib[2];
    char uuid[64];
    size_t len;

    mib[0] = CTL_KERN;
    mib[1] = KERN_HOSTUUID;
    len = sizeof(uuid)*sizeof(char);
    sysctl((const int *)mib, 2, uuid, &len, NULL,	0);
    return QString(uuid);
}

void AiryxMenu::productName()
{
    QProcess *dmihelper = new QProcess(this);
    connect(dmihelper, SIGNAL(finished(int, QProcess::ExitStatus)), this, SLOT(processFinished(int, QProcess::ExitStatus)));
    connect(dmihelper, SIGNAL(readyReadStandardOutput()), this, SLOT(dmiOutputReady()));

    dmihelper->start("/System/Library/CoreServices/DMIHelper", QStringList());
}

void AiryxMenu::dmiOutputReady()
{
    QProcess *p = (QProcess *)sender();
    QByteArray output = p->readAllStandardOutput();

    QList<QByteArray> lines = output.split('\n');
    m_productName = QString::asprintf("%s %s", lines[0].constData(), lines[1].constData());
}

void AiryxMenu::aboutThisComputer()
{
    if(m_about) {
        m_about->open();
        m_about->raise();
        m_about->activateWindow();
        return;
    }

    m_about = new AXMessageBox();
    m_about->setWindowTitle("About this Computer");
    m_about->setStandardButtons(0);
    m_about->setText("<table style=\"table-layout: fixed; borders: 0;\"><tr><td width=\"100%\" align=\"center\" valign=\"middle\">"
                   "<img width=\"140\" height=\"140\" src=\"/usr/share/plasma/plasmoids/org.airyx.plasma.AiryxMenu/contents/images/tanuki_logo.png\">"
                   "</td><td>&nbsp;&nbsp;</td><td style=\"word-wrap: break-word; width: 100%;\">"
                   "<font face=\"Nimbus Sans\"><font size=\"+7\"><b>airyxOS</b> " AIRYX_CODENAME "</font><br>"
                   "Version " AIRYX_VERSION "<br>"
                   "</font size=\"-2\"><p><b>" + m_productName + "</b></p>"
                   "<p><b>Processor</b>&nbsp;&nbsp; "+ QString::asprintf("%d-core ", numCPUs()) + CPUModel() +"</p>"
                   "<p><b>Memory</b>&nbsp;&nbsp; "+ formatAsGB(realMemory()) +"</p>"
                   "<p><b>Graphics</b>&nbsp;&nbsp; "+ m_adaptorsFound.join("<br/>") +"</p>"
                   "</font></font></td></tr></table>");
    m_about->setWindowModality(Qt::NonModal);
    m_about->open(this, SLOT(aboutFinished()));
}

void AiryxMenu::aboutFinished()
{
    delete m_about;
    m_about = NULL;
}

void AiryxMenu::requestLogout(int a, int b, int c)
{
    QDBusMessage msgLogout = QDBusMessage::createMethodCall("org.kde.ksmserver", "/KSMServer", "", "logout");
    QVariantList args;
    args.append(a);
    args.append(b);
    args.append(c);
    msgLogout.setArguments(args);
    m_dbus.asyncCall(msgLogout);
}

void AiryxMenu::systemPreferences()
{
    LSLaunchURLSpec spec;
    spec.appURL = CFURLCreateWithFileSystemPath(NULL, CFSTR("/usr/bin/systemsettings5"), kCFURLPOSIXPathStyle, false);
    spec.asyncRefCon = 0;
    spec.itemURLs = NULL;
    spec.launchFlags = kLSLaunchDefaults;
    LSOpenFromURLSpec(&spec, NULL);
    CFRelease(spec.appURL);
}

void AiryxMenu::suspend()
{
    QDBusMessage msgSuspend = QDBusMessage::createMethodCall("org.kde.Solid.PowerManagement", "/org/kde/Solid/PowerManagement/Actions/SuspendSession",
        "org.kde.Solid.PowerManagement.Actions.SuspendSession", "suspendHybrid");
    m_dbus.asyncCall(msgSuspend);
}

QStringList AiryxMenu::recentDocuments()
{
    return KRecentDocument::recentDocuments();
}

K_PLUGIN_CLASS_WITH_JSON(AiryxMenu, "metadata.json")

#include "sysmenu.moc"
