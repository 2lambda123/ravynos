# Makefile for mrsas driver

KMOD=mrsas
.PATH: ${SRCTOP}/sys/dev/${KMOD}

.if ${MACHINE_ARCH} == "i386" || ${MACHINE_ARCH} == "amd64"
SUBDIR+= mrsas_linux
.endif

SRCS=mrsas.c mrsas_cam.c mrsas_ioctl.c mrsas_fp.c
SRCS+=  device_if.h bus_if.h pci_if.h opt_cam.h opt_scsi.h

#CFLAGS+= -MRSAS_DEBUG
.include <bsd.kmod.mk>
CFLAGS+= -fgnu89-inline

.if ${MACHINE_ARCH} == "amd64"
CFLAGS+= -DCOMPAT_FREEBSD32
.endif

clean_cscope:
	rm -f cscope*

cscope:	clean_cscope
	/usr/local/bin/cscope -b *.[ch]

cleanall:	clean clean_cscope
