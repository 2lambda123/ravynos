THISDIR:= ${.CURDIR}
.if "${CIRRUS_CI}"
SHA!= echo ${CIRRUS_CHANGE_IN_REPO}|cut -c1-7|tr '[a-z]' '[A-Z]'
.else
SHA!= cd ${.CURDIR} && git log -1|head -1|cut -c8-14|tr '[a-z]' '[A-Z]'
.endif

all: clean build
clean:
	rm -rf ${BUILDROOT}/System/Library/CoreServices
	rm -rf Filer/build Filer/Filer.app
	rm -rf /usr/obj/${TOPDIR}/${MACHINE}.${MACHINE_CPUARCH}/CoreServices/Dock
	rm -rf /usr/obj/${TOPDIR}/${MACHINE}.${MACHINE_CPUARCH}/CoreServices/Filer
	rm -rf /usr/obj/${TOPDIR}/${MACHINE}.${MACHINE_CPUARCH}/CoreServices/WindowServer

DMIHelper: ${.CURDIR}/DMIHelper.c
	mkdir -p ${BUILDROOT}/System/Library/CoreServices
	$(CC) -o ${BUILDROOT}/System/Library/CoreServices/DMIHelper ${.CURDIR}/DMIHelper.c
	${SUDO} chown 0:0 ${BUILDROOT}/System/Library/CoreServices/DMIHelper
	${SUDO} chmod 4755 ${BUILDROOT}/System/Library/CoreServices/DMIHelper

build: buildWindowServer DMIHelper buildDock #buildFiler 
	mkdir -p ${BUILDROOT}/System/Library/CoreServices/
	mkdir -p ${BUILDROOT}/Applications/Utilities/
	sed -e 's/RAVYNOS_VERSION/${RAVYNOS_VERSION}/' \
            -e 's/RAVYNOS_CODENAME/${RAVYNOS_CODENAME}/' \
            -e 's/BUILD_STAMP/${SHA}/' < ${.CURDIR}/SystemVersion.plist.in \
            >${BUILDROOT}/System/Library/CoreServices/SystemVersion.plist
	cp -av ${.CURDIR}/WindowServer/WindowServer.app ${BUILDROOT}/System/Library/CoreServices
	cp -av ${.CURDIR}/Dock/Dock.app ${BUILDROOT}/System/Library/CoreServices
	#cp -av ${.CURDIR}/Filer/Filer.app ${BUILDROOT}/System/Library/CoreServices
.for f in ${.CURDIR}/askpass 
		cp -fv ${f} ${BUILDROOT}/System/Library/CoreServices/
		chmod 755 ${BUILDROOT}/System/Library/CoreServices/$$(basename ${f})
.endfor

buildDock:
	${MAKE} -C ${.CURDIR}/Dock

buildWindowServer:
	${MAKE} -C ${.CURDIR}/WindowServer
	${MAKE} -C ${.CURDIR}/WindowServer/SystemUIServer
	${MAKE} -C ${.CURDIR}/WindowServer/LoginWindow
	cp -afv ${.CURDIR}/WindowServer/SystemUIServer/SystemUIServer.app \
	        ${.CURDIR}/WindowServer/LoginWindow/LoginWindow.app \
                ${.CURDIR}/WindowServer/WindowServer.app/Contents/Resources/

${.CURDIR}/Filer:
	git clone https://github.com/mszoek/Filer.git ${.CURDIR}/Filer
	cd ${.CURDIR}/Filer && git checkout airyx

buildFiler: ${.CURDIR}/Filer
	mkdir -p ${.CURDIR}/Filer/build/src
	${MAKE} -C ${.CURDIR}/Filer build
	cmake -S ${.CURDIR}/Filer -B ${.CURDIR}/Filer/build \
		-DCMAKE_BUILD_TYPE="Debug" \
		-DRAVYNOS=1 -DCMAKE_CXX_FLAGS="${EXTRA_CXXFLAGS}" \
		-DSYSTEM_FRAMEWORKS="-framework LaunchServices -framework Foundation -framework CoreFoundation -framework CFNetwork -lthr -lobjc"
	${MAKE} -C ${.CURDIR}/Filer/build -j${CORES}
	${MAKE} -C ${.CURDIR}/Filer/build DESTDIR=${.CURDIR}/Filer/Filer.app install
	cd ${.CURDIR}/Filer/Filer.app/Contents/Resources && mv -fv filer-qt.1 Filer.1
