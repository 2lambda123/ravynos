# $FreeBSD$

.include <bsd.own.mk>

NO_OBJ=
INCS=	_blkcnt_t.h \
	_blksize_t.h \
	_clock_t.h \
	_ct_rune_t.h \
	_dev_t.h \
	_errno_t.h \
	_fd_clr.h \
	_fd_copy.h \
	_fd_def.h \
	_fd_isset.h \
	_fd_set.h \
	_fd_setsize.h \
	_fd_zero.h \
	_filesec_t.h \
	_fsblkcnt_t.h \
	_fsfilcnt_t.h \
	_fsid_t.h \
	_gid_t.h \
	_guid_t.h \
	_id_t.h \
	_in_addr_t.h \
	_in_port_t.h \
	_ino64_t.h \
	_ino_t.h \
	_int16_t.h \
	_int32_t.h \
	_int64_t.h \
	_int8_t.h \
	_intptr_t.h \
	_iovec_t.h \
	_key_t.h \
	_mach_port_t.h \
	_mbstate_t.h \
	_mode_t.h \
	_nlink_t.h \
	_null.h \
	_o_dsync.h \
	_o_sync.h \
	_off_t.h \
	_offsetof.h \
	_os_inline.h \
	_pid_t.h \
	_posix_vdisable.h \
	_ptrdiff_t.h \
	_rsize_t.h \
	_rune_t.h \
	_s_ifmt.h \
	_sa_family_t.h \
	_seek_set.h \
	_sigaltstack.h \
	_sigset_t.h \
	_size_t.h \
	_socklen_t.h \
	_ssize_t.h \
	_suseconds_t.h \
	_time_t.h \
	_timespec.h \
	_timeval.h \
	_timeval32.h \
	_ucontext.h \
	_ucontext64.h \
	_uid_t.h \
	_uintptr_t.h \
	_useconds_t.h \
	_uuid_t.h \
	_va_list.h \
	_wchar_t.h \
	_wint_t.h

INCSDIR=${INCLUDEDIR}/apple/sys/_types

includes:
	${INSTALL} -d -o ${BINOWN} -g ${BINGRP} -m 0755 ${DESTDIR}${INCSDIR}
.for h in ${INCS}
	${INSTALL} -C -o ${BINOWN} -g ${BINGRP} -m 0444 ${.CURDIR}/$h ${DESTDIR}${INCSDIR}
.endfor

distprep:
	mkdir -pv ${DISTDIR}/base/${INCSDIR}

.include <bsd.prog.mk>

distribute: distprep

