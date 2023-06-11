/*
 * System call names.
 *
 * DO NOT EDIT-- this file is automatically @generated.
 */

const char *freebsd32_syscallnames[] = {
	"syscall",			/* 0 = syscall */
	"exit",			/* 1 = exit */
	"fork",			/* 2 = fork */
	"read",			/* 3 = read */
	"write",			/* 4 = write */
	"open",			/* 5 = open */
	"close",			/* 6 = close */
	"freebsd32_wait4",			/* 7 = freebsd32_wait4 */
	"compat.creat",		/* 8 = old creat */
	"link",			/* 9 = link */
	"unlink",			/* 10 = unlink */
	"obs_execv",			/* 11 = obsolete execv */
	"chdir",			/* 12 = chdir */
	"fchdir",			/* 13 = fchdir */
	"compat11.mknod",		/* 14 = freebsd11 mknod */
	"chmod",			/* 15 = chmod */
	"chown",			/* 16 = chown */
	"break",			/* 17 = break */
	"compat4.freebsd32_getfsstat",		/* 18 = freebsd4 freebsd32_getfsstat */
	"compat.freebsd32_lseek",		/* 19 = old freebsd32_lseek */
	"getpid",			/* 20 = getpid */
	"mount",			/* 21 = mount */
	"unmount",			/* 22 = unmount */
	"setuid",			/* 23 = setuid */
	"getuid",			/* 24 = getuid */
	"geteuid",			/* 25 = geteuid */
	"freebsd32_ptrace",			/* 26 = freebsd32_ptrace */
	"freebsd32_recvmsg",			/* 27 = freebsd32_recvmsg */
	"freebsd32_sendmsg",			/* 28 = freebsd32_sendmsg */
	"recvfrom",			/* 29 = recvfrom */
	"accept",			/* 30 = accept */
	"getpeername",			/* 31 = getpeername */
	"getsockname",			/* 32 = getsockname */
	"access",			/* 33 = access */
	"chflags",			/* 34 = chflags */
	"fchflags",			/* 35 = fchflags */
	"sync",			/* 36 = sync */
	"kill",			/* 37 = kill */
	"compat.freebsd32_stat",		/* 38 = old freebsd32_stat */
	"getppid",			/* 39 = getppid */
	"compat.freebsd32_lstat",		/* 40 = old freebsd32_lstat */
	"dup",			/* 41 = dup */
	"compat10.pipe",		/* 42 = freebsd10 pipe */
	"getegid",			/* 43 = getegid */
	"profil",			/* 44 = profil */
	"ktrace",			/* 45 = ktrace */
	"compat.freebsd32_sigaction",		/* 46 = old freebsd32_sigaction */
	"getgid",			/* 47 = getgid */
	"compat.sigprocmask",		/* 48 = old sigprocmask */
	"getlogin",			/* 49 = getlogin */
	"setlogin",			/* 50 = setlogin */
	"acct",			/* 51 = acct */
	"compat.sigpending",		/* 52 = old sigpending */
	"freebsd32_sigaltstack",			/* 53 = freebsd32_sigaltstack */
	"freebsd32_ioctl",			/* 54 = freebsd32_ioctl */
	"reboot",			/* 55 = reboot */
	"revoke",			/* 56 = revoke */
	"symlink",			/* 57 = symlink */
	"readlink",			/* 58 = readlink */
	"freebsd32_execve",			/* 59 = freebsd32_execve */
	"umask",			/* 60 = umask */
	"chroot",			/* 61 = chroot */
	"compat.freebsd32_fstat",		/* 62 = old freebsd32_fstat */
	"obs_getkerninfo",			/* 63 = obsolete ogetkerninfo */
	"compat.getpagesize",		/* 64 = old getpagesize */
	"msync",			/* 65 = msync */
	"vfork",			/* 66 = vfork */
	"obs_vread",			/* 67 = obsolete vread */
	"obs_vwrite",			/* 68 = obsolete vwrite */
	"sbrk",			/* 69 = sbrk */
	"sstk",			/* 70 = sstk */
	"compat.freebsd32_mmap",		/* 71 = old freebsd32_mmap */
	"compat11.vadvise",		/* 72 = freebsd11 vadvise */
	"munmap",			/* 73 = munmap */
	"freebsd32_mprotect",			/* 74 = freebsd32_mprotect */
	"madvise",			/* 75 = madvise */
	"obs_vhangup",			/* 76 = obsolete vhangup */
	"obs_vlimit",			/* 77 = obsolete vlimit */
	"mincore",			/* 78 = mincore */
	"getgroups",			/* 79 = getgroups */
	"setgroups",			/* 80 = setgroups */
	"getpgrp",			/* 81 = getpgrp */
	"setpgid",			/* 82 = setpgid */
	"freebsd32_setitimer",			/* 83 = freebsd32_setitimer */
	"compat.wait",		/* 84 = old wait */
	"swapon",			/* 85 = swapon */
	"freebsd32_getitimer",			/* 86 = freebsd32_getitimer */
	"compat.gethostname",		/* 87 = old gethostname */
	"compat.sethostname",		/* 88 = old sethostname */
	"getdtablesize",			/* 89 = getdtablesize */
	"dup2",			/* 90 = dup2 */
	"#91",			/* 91 = reserved for local use */
	"freebsd32_fcntl",			/* 92 = freebsd32_fcntl */
	"freebsd32_select",			/* 93 = freebsd32_select */
	"#94",			/* 94 = reserved for local use */
	"fsync",			/* 95 = fsync */
	"setpriority",			/* 96 = setpriority */
	"socket",			/* 97 = socket */
	"connect",			/* 98 = connect */
	"compat.accept",		/* 99 = old accept */
	"getpriority",			/* 100 = getpriority */
	"compat.send",		/* 101 = old send */
	"compat.recv",		/* 102 = old recv */
	"compat.freebsd32_sigreturn",		/* 103 = old freebsd32_sigreturn */
	"bind",			/* 104 = bind */
	"setsockopt",			/* 105 = setsockopt */
	"listen",			/* 106 = listen */
	"obs_vtimes",			/* 107 = obsolete vtimes */
	"compat.freebsd32_sigvec",		/* 108 = old freebsd32_sigvec */
	"compat.sigblock",		/* 109 = old sigblock */
	"compat.sigsetmask",		/* 110 = old sigsetmask */
	"compat.sigsuspend",		/* 111 = old sigsuspend */
	"compat.freebsd32_sigstack",		/* 112 = old freebsd32_sigstack */
	"compat.freebsd32_recvmsg",		/* 113 = old freebsd32_recvmsg */
	"compat.freebsd32_sendmsg",		/* 114 = old freebsd32_sendmsg */
	"obs_vtrace",			/* 115 = obsolete vtrace */
	"freebsd32_gettimeofday",			/* 116 = freebsd32_gettimeofday */
	"freebsd32_getrusage",			/* 117 = freebsd32_getrusage */
	"getsockopt",			/* 118 = getsockopt */
	"#119",			/* 119 = reserved for local use */
	"freebsd32_readv",			/* 120 = freebsd32_readv */
	"freebsd32_writev",			/* 121 = freebsd32_writev */
	"freebsd32_settimeofday",			/* 122 = freebsd32_settimeofday */
	"fchown",			/* 123 = fchown */
	"fchmod",			/* 124 = fchmod */
	"compat.recvfrom",		/* 125 = old recvfrom */
	"setreuid",			/* 126 = setreuid */
	"setregid",			/* 127 = setregid */
	"rename",			/* 128 = rename */
	"compat.freebsd32_truncate",		/* 129 = old freebsd32_truncate */
	"compat.freebsd32_ftruncate",		/* 130 = old freebsd32_ftruncate */
	"flock",			/* 131 = flock */
	"mkfifo",			/* 132 = mkfifo */
	"sendto",			/* 133 = sendto */
	"shutdown",			/* 134 = shutdown */
	"socketpair",			/* 135 = socketpair */
	"mkdir",			/* 136 = mkdir */
	"rmdir",			/* 137 = rmdir */
	"freebsd32_utimes",			/* 138 = freebsd32_utimes */
	"obs_freebsd32_sigreturn",			/* 139 = obsolete sigreturn */
	"freebsd32_adjtime",			/* 140 = freebsd32_adjtime */
	"compat.getpeername",		/* 141 = old getpeername */
	"compat.gethostid",		/* 142 = old gethostid */
	"compat.freebsd32_sethostid",		/* 143 = old freebsd32_sethostid */
	"compat.getrlimit",		/* 144 = old getrlimit */
	"compat.setrlimit",		/* 145 = old setrlimit */
	"compat.killpg",		/* 146 = old killpg */
	"setsid",			/* 147 = setsid */
	"quotactl",			/* 148 = quotactl */
	"compat.quota",		/* 149 = old quota */
	"compat.getsockname",		/* 150 = old getsockname */
	"#151",			/* 151 = reserved for local use */
	"#152",			/* 152 = reserved for local use */
	"#153",			/* 153 = reserved for local use */
	"#154",			/* 154 = nlm_syscall */
	"#155",			/* 155 = nfssvc */
	"compat.freebsd32_getdirentries",		/* 156 = old freebsd32_getdirentries */
	"compat4.freebsd32_statfs",		/* 157 = freebsd4 freebsd32_statfs */
	"compat4.freebsd32_fstatfs",		/* 158 = freebsd4 freebsd32_fstatfs */
	"#159",			/* 159 = reserved for local use */
	"#160",			/* 160 = lgetfh */
	"getfh",			/* 161 = getfh */
	"compat4.getdomainname",		/* 162 = freebsd4 getdomainname */
	"compat4.setdomainname",		/* 163 = freebsd4 setdomainname */
	"compat4.uname",		/* 164 = freebsd4 uname */
	"freebsd32_sysarch",			/* 165 = freebsd32_sysarch */
	"rtprio",			/* 166 = rtprio */
	"#167",			/* 167 = reserved for local use */
	"#168",			/* 168 = reserved for local use */
	"freebsd32_semsys",			/* 169 = freebsd32_semsys */
	"freebsd32_msgsys",			/* 170 = freebsd32_msgsys */
	"freebsd32_shmsys",			/* 171 = freebsd32_shmsys */
	"#172",			/* 172 = reserved for local use */
	"compat6.freebsd32_pread",		/* 173 = freebsd6 freebsd32_pread */
	"compat6.freebsd32_pwrite",		/* 174 = freebsd6 freebsd32_pwrite */
	"setfib",			/* 175 = setfib */
	"freebsd32_ntp_adjtime",			/* 176 = freebsd32_ntp_adjtime */
	"#177",			/* 177 = reserved for local use */
	"#178",			/* 178 = reserved for local use */
	"#179",			/* 179 = reserved for local use */
	"#180",			/* 180 = reserved for local use */
	"setgid",			/* 181 = setgid */
	"setegid",			/* 182 = setegid */
	"seteuid",			/* 183 = seteuid */
	"obs_lfs_bmapv",			/* 184 = obsolete lfs_bmapv */
	"obs_lfs_markv",			/* 185 = obsolete lfs_markv */
	"obs_lfs_segclean",			/* 186 = obsolete lfs_segclean */
	"obs_lfs_segwait",			/* 187 = obsolete lfs_segwait */
	"compat11.freebsd32_stat",		/* 188 = freebsd11 freebsd32_stat */
	"compat11.freebsd32_fstat",		/* 189 = freebsd11 freebsd32_fstat */
	"compat11.freebsd32_lstat",		/* 190 = freebsd11 freebsd32_lstat */
	"pathconf",			/* 191 = pathconf */
	"fpathconf",			/* 192 = fpathconf */
	"#193",			/* 193 = reserved for local use */
	"getrlimit",			/* 194 = getrlimit */
	"setrlimit",			/* 195 = setrlimit */
	"compat11.freebsd32_getdirentries",		/* 196 = freebsd11 freebsd32_getdirentries */
	"compat6.freebsd32_mmap",		/* 197 = freebsd6 freebsd32_mmap */
	"__syscall",			/* 198 = __syscall */
	"compat6.freebsd32_lseek",		/* 199 = freebsd6 freebsd32_lseek */
	"compat6.freebsd32_truncate",		/* 200 = freebsd6 freebsd32_truncate */
	"compat6.freebsd32_ftruncate",		/* 201 = freebsd6 freebsd32_ftruncate */
	"freebsd32___sysctl",			/* 202 = freebsd32___sysctl */
	"mlock",			/* 203 = mlock */
	"munlock",			/* 204 = munlock */
	"undelete",			/* 205 = undelete */
	"freebsd32_futimes",			/* 206 = freebsd32_futimes */
	"getpgid",			/* 207 = getpgid */
	"#208",			/* 208 = reserved for local use */
	"poll",			/* 209 = poll */
	"lkmnosys",			/* 210 = lkmnosys */
	"lkmnosys",			/* 211 = lkmnosys */
	"lkmnosys",			/* 212 = lkmnosys */
	"lkmnosys",			/* 213 = lkmnosys */
	"lkmnosys",			/* 214 = lkmnosys */
	"lkmnosys",			/* 215 = lkmnosys */
	"lkmnosys",			/* 216 = lkmnosys */
	"lkmnosys",			/* 217 = lkmnosys */
	"lkmnosys",			/* 218 = lkmnosys */
	"lkmnosys",			/* 219 = lkmnosys */
	"compat7.freebsd32___semctl",		/* 220 = freebsd7 freebsd32___semctl */
	"semget",			/* 221 = semget */
	"semop",			/* 222 = semop */
	"obs_semconfig",			/* 223 = obsolete semconfig */
	"compat7.freebsd32_msgctl",		/* 224 = freebsd7 freebsd32_msgctl */
	"msgget",			/* 225 = msgget */
	"freebsd32_msgsnd",			/* 226 = freebsd32_msgsnd */
	"freebsd32_msgrcv",			/* 227 = freebsd32_msgrcv */
	"shmat",			/* 228 = shmat */
	"compat7.freebsd32_shmctl",		/* 229 = freebsd7 freebsd32_shmctl */
	"shmdt",			/* 230 = shmdt */
	"shmget",			/* 231 = shmget */
	"freebsd32_clock_gettime",			/* 232 = freebsd32_clock_gettime */
	"freebsd32_clock_settime",			/* 233 = freebsd32_clock_settime */
	"freebsd32_clock_getres",			/* 234 = freebsd32_clock_getres */
	"freebsd32_ktimer_create",			/* 235 = freebsd32_ktimer_create */
	"ktimer_delete",			/* 236 = ktimer_delete */
	"freebsd32_ktimer_settime",			/* 237 = freebsd32_ktimer_settime */
	"freebsd32_ktimer_gettime",			/* 238 = freebsd32_ktimer_gettime */
	"ktimer_getoverrun",			/* 239 = ktimer_getoverrun */
	"freebsd32_nanosleep",			/* 240 = freebsd32_nanosleep */
	"ffclock_getcounter",			/* 241 = ffclock_getcounter */
	"freebsd32_ffclock_setestimate",			/* 242 = freebsd32_ffclock_setestimate */
	"freebsd32_ffclock_getestimate",			/* 243 = freebsd32_ffclock_getestimate */
	"freebsd32_clock_nanosleep",			/* 244 = freebsd32_clock_nanosleep */
	"#245",			/* 245 = reserved for local use */
	"#246",			/* 246 = reserved for local use */
	"freebsd32_clock_getcpuclockid2",			/* 247 = freebsd32_clock_getcpuclockid2 */
	"#248",			/* 248 = ntp_gettime */
	"#249",			/* 249 = reserved for local use */
	"minherit",			/* 250 = minherit */
	"rfork",			/* 251 = rfork */
	"obs_openbsd_poll",			/* 252 = obsolete openbsd_poll */
	"issetugid",			/* 253 = issetugid */
	"lchown",			/* 254 = lchown */
	"freebsd32_aio_read",			/* 255 = freebsd32_aio_read */
	"freebsd32_aio_write",			/* 256 = freebsd32_aio_write */
	"freebsd32_lio_listio",			/* 257 = freebsd32_lio_listio */
	"__proc_info",			/* 258 = __proc_info */
	"__iopolicysys",			/* 259 = __iopolicysys */
	"#260",			/* 260 = reserved for local use */
	"#261",			/* 261 = reserved for local use */
	"#262",			/* 262 = reserved for local use */
	"#263",			/* 263 = reserved for local use */
	"#264",			/* 264 = reserved for local use */
	"#265",			/* 265 = reserved for local use */
	"#266",			/* 266 = reserved for local use */
	"#267",			/* 267 = reserved for local use */
	"#268",			/* 268 = reserved for local use */
	"#269",			/* 269 = reserved for local use */
	"#270",			/* 270 = reserved for local use */
	"#271",			/* 271 = reserved for local use */
	"compat11.getdents",		/* 272 = freebsd11 getdents */
	"#273",			/* 273 = reserved for local use */
	"lchmod",			/* 274 = lchmod */
	"obs_netbsd_lchown",			/* 275 = obsolete netbsd_lchown */
	"freebsd32_lutimes",			/* 276 = freebsd32_lutimes */
	"obs_netbsd_msync",			/* 277 = obsolete netbsd_msync */
	"compat11.freebsd32_nstat",		/* 278 = freebsd11 freebsd32_nstat */
	"compat11.freebsd32_nfstat",		/* 279 = freebsd11 freebsd32_nfstat */
	"compat11.freebsd32_nlstat",		/* 280 = freebsd11 freebsd32_nlstat */
	"audit_session_self",			/* 281 = audit_session_self */
	"audit_session_join",			/* 282 = audit_session_join */
	"audit_session_port",			/* 283 = audit_session_port */
	"#284",			/* 284 = reserved for local use */
	"#285",			/* 285 = reserved for local use */
	"#286",			/* 286 = reserved for local use */
	"#287",			/* 287 = reserved for local use */
	"#288",			/* 288 = reserved for local use */
	"freebsd32_preadv",			/* 289 = freebsd32_preadv */
	"freebsd32_pwritev",			/* 290 = freebsd32_pwritev */
	"#291",			/* 291 = reserved for local use */
	"#292",			/* 292 = reserved for local use */
	"#293",			/* 293 = reserved for local use */
	"#294",			/* 294 = reserved for local use */
	"#295",			/* 295 = reserved for local use */
	"#296",			/* 296 = reserved for local use */
	"compat4.freebsd32_fhstatfs",		/* 297 = freebsd4 freebsd32_fhstatfs */
	"fhopen",			/* 298 = fhopen */
	"compat11.freebsd32_fhstat",		/* 299 = freebsd11 freebsd32_fhstat */
	"modnext",			/* 300 = modnext */
	"freebsd32_modstat",			/* 301 = freebsd32_modstat */
	"modfnext",			/* 302 = modfnext */
	"modfind",			/* 303 = modfind */
	"kldload",			/* 304 = kldload */
	"kldunload",			/* 305 = kldunload */
	"kldfind",			/* 306 = kldfind */
	"kldnext",			/* 307 = kldnext */
	"freebsd32_kldstat",			/* 308 = freebsd32_kldstat */
	"kldfirstmod",			/* 309 = kldfirstmod */
	"getsid",			/* 310 = getsid */
	"setresuid",			/* 311 = setresuid */
	"setresgid",			/* 312 = setresgid */
	"obs_signanosleep",			/* 313 = obsolete signanosleep */
	"freebsd32_aio_return",			/* 314 = freebsd32_aio_return */
	"freebsd32_aio_suspend",			/* 315 = freebsd32_aio_suspend */
	"aio_cancel",			/* 316 = aio_cancel */
	"freebsd32_aio_error",			/* 317 = freebsd32_aio_error */
	"compat6.freebsd32_aio_read",		/* 318 = freebsd6 freebsd32_aio_read */
	"compat6.freebsd32_aio_write",		/* 319 = freebsd6 freebsd32_aio_write */
	"compat6.freebsd32_lio_listio",		/* 320 = freebsd6 freebsd32_lio_listio */
	"yield",			/* 321 = yield */
	"obs_thr_sleep",			/* 322 = obsolete thr_sleep */
	"obs_thr_wakeup",			/* 323 = obsolete thr_wakeup */
	"mlockall",			/* 324 = mlockall */
	"munlockall",			/* 325 = munlockall */
	"__getcwd",			/* 326 = __getcwd */
	"sched_setparam",			/* 327 = sched_setparam */
	"sched_getparam",			/* 328 = sched_getparam */
	"sched_setscheduler",			/* 329 = sched_setscheduler */
	"sched_getscheduler",			/* 330 = sched_getscheduler */
	"sched_yield",			/* 331 = sched_yield */
	"sched_get_priority_max",			/* 332 = sched_get_priority_max */
	"sched_get_priority_min",			/* 333 = sched_get_priority_min */
	"freebsd32_sched_rr_get_interval",			/* 334 = freebsd32_sched_rr_get_interval */
	"utrace",			/* 335 = utrace */
	"compat4.freebsd32_sendfile",		/* 336 = freebsd4 freebsd32_sendfile */
	"#337",			/* 337 = kldsym */
	"freebsd32_jail",			/* 338 = freebsd32_jail */
	"#339",			/* 339 = nnpfs_syscall */
	"sigprocmask",			/* 340 = sigprocmask */
	"sigsuspend",			/* 341 = sigsuspend */
	"compat4.freebsd32_sigaction",		/* 342 = freebsd4 freebsd32_sigaction */
	"sigpending",			/* 343 = sigpending */
	"compat4.freebsd32_sigreturn",		/* 344 = freebsd4 freebsd32_sigreturn */
	"freebsd32_sigtimedwait",			/* 345 = freebsd32_sigtimedwait */
	"freebsd32_sigwaitinfo",			/* 346 = freebsd32_sigwaitinfo */
	"__acl_get_file",			/* 347 = __acl_get_file */
	"__acl_set_file",			/* 348 = __acl_set_file */
	"__acl_get_fd",			/* 349 = __acl_get_fd */
	"__acl_set_fd",			/* 350 = __acl_set_fd */
	"__acl_delete_file",			/* 351 = __acl_delete_file */
	"__acl_delete_fd",			/* 352 = __acl_delete_fd */
	"__acl_aclcheck_file",			/* 353 = __acl_aclcheck_file */
	"__acl_aclcheck_fd",			/* 354 = __acl_aclcheck_fd */
	"extattrctl",			/* 355 = extattrctl */
	"extattr_set_file",			/* 356 = extattr_set_file */
	"extattr_get_file",			/* 357 = extattr_get_file */
	"extattr_delete_file",			/* 358 = extattr_delete_file */
	"freebsd32_aio_waitcomplete",			/* 359 = freebsd32_aio_waitcomplete */
	"getresuid",			/* 360 = getresuid */
	"getresgid",			/* 361 = getresgid */
	"kqueue",			/* 362 = kqueue */
	"compat11.freebsd32_kevent",		/* 363 = freebsd11 freebsd32_kevent */
	"obs___cap_get_proc",			/* 364 = obsolete __cap_get_proc */
	"obs___cap_set_proc",			/* 365 = obsolete __cap_set_proc */
	"obs___cap_get_fd",			/* 366 = obsolete __cap_get_fd */
	"obs___cap_get_file",			/* 367 = obsolete __cap_get_file */
	"obs___cap_set_fd",			/* 368 = obsolete __cap_set_fd */
	"obs___cap_set_file",			/* 369 = obsolete __cap_set_file */
	"kevent64",			/* 370 = kevent64 */
	"extattr_set_fd",			/* 371 = extattr_set_fd */
	"extattr_get_fd",			/* 372 = extattr_get_fd */
	"extattr_delete_fd",			/* 373 = extattr_delete_fd */
	"__setugid",			/* 374 = __setugid */
	"obs_nfsclnt",			/* 375 = obsolete nfsclnt */
	"eaccess",			/* 376 = eaccess */
	"#377",			/* 377 = afs3_syscall */
	"freebsd32_nmount",			/* 378 = freebsd32_nmount */
	"obs_kse_exit",			/* 379 = obsolete kse_exit */
	"obs_kse_wakeup",			/* 380 = obsolete kse_wakeup */
	"obs_kse_create",			/* 381 = obsolete kse_create */
	"obs_kse_thr_interrupt",			/* 382 = obsolete kse_thr_interrupt */
	"obs_kse_release",			/* 383 = obsolete kse_release */
	"#384",			/* 384 = __mac_get_proc */
	"#385",			/* 385 = __mac_set_proc */
	"#386",			/* 386 = __mac_get_fd */
	"#387",			/* 387 = __mac_get_file */
	"#388",			/* 388 = __mac_set_fd */
	"#389",			/* 389 = __mac_set_file */
	"kenv",			/* 390 = kenv */
	"lchflags",			/* 391 = lchflags */
	"uuidgen",			/* 392 = uuidgen */
	"freebsd32_sendfile",			/* 393 = freebsd32_sendfile */
	"#394",			/* 394 = mac_syscall */
	"compat11.freebsd32_getfsstat",		/* 395 = freebsd11 freebsd32_getfsstat */
	"compat11.statfs",		/* 396 = freebsd11 statfs */
	"compat11.fstatfs",		/* 397 = freebsd11 fstatfs */
	"compat11.fhstatfs",		/* 398 = freebsd11 fhstatfs */
	"#399",			/* 399 = reserved for local use */
	"ksem_close",			/* 400 = ksem_close */
	"ksem_post",			/* 401 = ksem_post */
	"ksem_wait",			/* 402 = ksem_wait */
	"ksem_trywait",			/* 403 = ksem_trywait */
	"freebsd32_ksem_init",			/* 404 = freebsd32_ksem_init */
	"freebsd32_ksem_open",			/* 405 = freebsd32_ksem_open */
	"ksem_unlink",			/* 406 = ksem_unlink */
	"ksem_getvalue",			/* 407 = ksem_getvalue */
	"ksem_destroy",			/* 408 = ksem_destroy */
	"#409",			/* 409 = __mac_get_pid */
	"#410",			/* 410 = __mac_get_link */
	"#411",			/* 411 = __mac_set_link */
	"extattr_set_link",			/* 412 = extattr_set_link */
	"extattr_get_link",			/* 413 = extattr_get_link */
	"extattr_delete_link",			/* 414 = extattr_delete_link */
	"#415",			/* 415 = __mac_execve */
	"freebsd32_sigaction",			/* 416 = freebsd32_sigaction */
	"freebsd32_sigreturn",			/* 417 = freebsd32_sigreturn */
	"#418",			/* 418 = reserved for local use */
	"#419",			/* 419 = reserved for local use */
	"#420",			/* 420 = reserved for local use */
	"freebsd32_getcontext",			/* 421 = freebsd32_getcontext */
	"freebsd32_setcontext",			/* 422 = freebsd32_setcontext */
	"freebsd32_swapcontext",			/* 423 = freebsd32_swapcontext */
	"compat13.swapoff",		/* 424 = freebsd13 swapoff */
	"__acl_get_link",			/* 425 = __acl_get_link */
	"__acl_set_link",			/* 426 = __acl_set_link */
	"__acl_delete_link",			/* 427 = __acl_delete_link */
	"__acl_aclcheck_link",			/* 428 = __acl_aclcheck_link */
	"sigwait",			/* 429 = sigwait */
	"#430",			/* 430 = thr_create */
	"thr_exit",			/* 431 = thr_exit */
	"thr_self",			/* 432 = thr_self */
	"thr_kill",			/* 433 = thr_kill */
	"compat10.freebsd32__umtx_lock",		/* 434 = freebsd10 freebsd32__umtx_lock */
	"compat10.freebsd32__umtx_unlock",		/* 435 = freebsd10 freebsd32__umtx_unlock */
	"jail_attach",			/* 436 = jail_attach */
	"extattr_list_fd",			/* 437 = extattr_list_fd */
	"extattr_list_file",			/* 438 = extattr_list_file */
	"extattr_list_link",			/* 439 = extattr_list_link */
	"obs_kse_switchin",			/* 440 = obsolete kse_switchin */
	"freebsd32_ksem_timedwait",			/* 441 = freebsd32_ksem_timedwait */
	"freebsd32_thr_suspend",			/* 442 = freebsd32_thr_suspend */
	"thr_wake",			/* 443 = thr_wake */
	"kldunloadf",			/* 444 = kldunloadf */
	"audit",			/* 445 = audit */
	"auditon",			/* 446 = auditon */
	"getauid",			/* 447 = getauid */
	"setauid",			/* 448 = setauid */
	"getaudit",			/* 449 = getaudit */
	"setaudit",			/* 450 = setaudit */
	"getaudit_addr",			/* 451 = getaudit_addr */
	"setaudit_addr",			/* 452 = setaudit_addr */
	"auditctl",			/* 453 = auditctl */
	"freebsd32__umtx_op",			/* 454 = freebsd32__umtx_op */
	"freebsd32_thr_new",			/* 455 = freebsd32_thr_new */
	"freebsd32_sigqueue",			/* 456 = freebsd32_sigqueue */
	"freebsd32_kmq_open",			/* 457 = freebsd32_kmq_open */
	"freebsd32_kmq_setattr",			/* 458 = freebsd32_kmq_setattr */
	"freebsd32_kmq_timedreceive",			/* 459 = freebsd32_kmq_timedreceive */
	"freebsd32_kmq_timedsend",			/* 460 = freebsd32_kmq_timedsend */
	"freebsd32_kmq_notify",			/* 461 = freebsd32_kmq_notify */
	"kmq_unlink",			/* 462 = kmq_unlink */
	"freebsd32_abort2",			/* 463 = freebsd32_abort2 */
	"thr_set_name",			/* 464 = thr_set_name */
	"freebsd32_aio_fsync",			/* 465 = freebsd32_aio_fsync */
	"rtprio_thread",			/* 466 = rtprio_thread */
	"thr_stack",			/* 467 = thr_stack */
	"thr_workq",			/* 468 = thr_workq */
	"#469",			/* 469 = __getpath_fromfd */
	"#470",			/* 470 = __getpath_fromaddr */
	"sctp_peeloff",			/* 471 = sctp_peeloff */
	"sctp_generic_sendmsg",			/* 472 = sctp_generic_sendmsg */
	"sctp_generic_sendmsg_iov",			/* 473 = sctp_generic_sendmsg_iov */
	"sctp_generic_recvmsg",			/* 474 = sctp_generic_recvmsg */
	"freebsd32_pread",			/* 475 = freebsd32_pread */
	"freebsd32_pwrite",			/* 476 = freebsd32_pwrite */
	"freebsd32_mmap",			/* 477 = freebsd32_mmap */
	"freebsd32_lseek",			/* 478 = freebsd32_lseek */
	"freebsd32_truncate",			/* 479 = freebsd32_truncate */
	"freebsd32_ftruncate",			/* 480 = freebsd32_ftruncate */
	"thr_kill2",			/* 481 = thr_kill2 */
	"compat12.shm_open",		/* 482 = freebsd12 shm_open */
	"shm_unlink",			/* 483 = shm_unlink */
	"cpuset",			/* 484 = cpuset */
	"freebsd32_cpuset_setid",			/* 485 = freebsd32_cpuset_setid */
	"freebsd32_cpuset_getid",			/* 486 = freebsd32_cpuset_getid */
	"freebsd32_cpuset_getaffinity",			/* 487 = freebsd32_cpuset_getaffinity */
	"freebsd32_cpuset_setaffinity",			/* 488 = freebsd32_cpuset_setaffinity */
	"faccessat",			/* 489 = faccessat */
	"fchmodat",			/* 490 = fchmodat */
	"fchownat",			/* 491 = fchownat */
	"freebsd32_fexecve",			/* 492 = freebsd32_fexecve */
	"compat11.freebsd32_fstatat",		/* 493 = freebsd11 freebsd32_fstatat */
	"freebsd32_futimesat",			/* 494 = freebsd32_futimesat */
	"linkat",			/* 495 = linkat */
	"mkdirat",			/* 496 = mkdirat */
	"mkfifoat",			/* 497 = mkfifoat */
	"compat11.mknodat",		/* 498 = freebsd11 mknodat */
	"openat",			/* 499 = openat */
	"readlinkat",			/* 500 = readlinkat */
	"renameat",			/* 501 = renameat */
	"symlinkat",			/* 502 = symlinkat */
	"unlinkat",			/* 503 = unlinkat */
	"posix_openpt",			/* 504 = posix_openpt */
	"gssd_syscall",			/* 505 = gssd_syscall */
	"freebsd32_jail_get",			/* 506 = freebsd32_jail_get */
	"freebsd32_jail_set",			/* 507 = freebsd32_jail_set */
	"jail_remove",			/* 508 = jail_remove */
	"compat12.closefrom",		/* 509 = freebsd12 closefrom */
	"freebsd32___semctl",			/* 510 = freebsd32___semctl */
	"freebsd32_msgctl",			/* 511 = freebsd32_msgctl */
	"freebsd32_shmctl",			/* 512 = freebsd32_shmctl */
	"lpathconf",			/* 513 = lpathconf */
	"obs_cap_new",			/* 514 = obsolete cap_new */
	"__cap_rights_get",			/* 515 = __cap_rights_get */
	"cap_enter",			/* 516 = cap_enter */
	"cap_getmode",			/* 517 = cap_getmode */
	"pdfork",			/* 518 = pdfork */
	"pdkill",			/* 519 = pdkill */
	"pdgetpid",			/* 520 = pdgetpid */
	"#521",			/* 521 = reserved for local use */
	"freebsd32_pselect",			/* 522 = freebsd32_pselect */
	"getloginclass",			/* 523 = getloginclass */
	"setloginclass",			/* 524 = setloginclass */
	"rctl_get_racct",			/* 525 = rctl_get_racct */
	"rctl_get_rules",			/* 526 = rctl_get_rules */
	"rctl_get_limits",			/* 527 = rctl_get_limits */
	"rctl_add_rule",			/* 528 = rctl_add_rule */
	"rctl_remove_rule",			/* 529 = rctl_remove_rule */
	"freebsd32_posix_fallocate",			/* 530 = freebsd32_posix_fallocate */
	"freebsd32_posix_fadvise",			/* 531 = freebsd32_posix_fadvise */
	"freebsd32_wait6",			/* 532 = freebsd32_wait6 */
	"cap_rights_limit",			/* 533 = cap_rights_limit */
	"freebsd32_cap_ioctls_limit",			/* 534 = freebsd32_cap_ioctls_limit */
	"freebsd32_cap_ioctls_get",			/* 535 = freebsd32_cap_ioctls_get */
	"cap_fcntls_limit",			/* 536 = cap_fcntls_limit */
	"cap_fcntls_get",			/* 537 = cap_fcntls_get */
	"bindat",			/* 538 = bindat */
	"connectat",			/* 539 = connectat */
	"chflagsat",			/* 540 = chflagsat */
	"accept4",			/* 541 = accept4 */
	"pipe2",			/* 542 = pipe2 */
	"freebsd32_aio_mlock",			/* 543 = freebsd32_aio_mlock */
	"freebsd32_procctl",			/* 544 = freebsd32_procctl */
	"freebsd32_ppoll",			/* 545 = freebsd32_ppoll */
	"freebsd32_futimens",			/* 546 = freebsd32_futimens */
	"freebsd32_utimensat",			/* 547 = freebsd32_utimensat */
	"obs_numa_getaffinity",			/* 548 = obsolete numa_getaffinity */
	"obs_numa_setaffinity",			/* 549 = obsolete numa_setaffinity */
	"fdatasync",			/* 550 = fdatasync */
	"freebsd32_fstat",			/* 551 = freebsd32_fstat */
	"freebsd32_fstatat",			/* 552 = freebsd32_fstatat */
	"freebsd32_fhstat",			/* 553 = freebsd32_fhstat */
	"getdirentries",			/* 554 = getdirentries */
	"statfs",			/* 555 = statfs */
	"fstatfs",			/* 556 = fstatfs */
	"freebsd32_getfsstat",			/* 557 = freebsd32_getfsstat */
	"fhstatfs",			/* 558 = fhstatfs */
	"freebsd32_mknodat",			/* 559 = freebsd32_mknodat */
	"freebsd32_kevent",			/* 560 = freebsd32_kevent */
	"freebsd32_cpuset_getdomain",			/* 561 = freebsd32_cpuset_getdomain */
	"freebsd32_cpuset_setdomain",			/* 562 = freebsd32_cpuset_setdomain */
	"getrandom",			/* 563 = getrandom */
	"getfhat",			/* 564 = getfhat */
	"fhlink",			/* 565 = fhlink */
	"fhlinkat",			/* 566 = fhlinkat */
	"fhreadlink",			/* 567 = fhreadlink */
	"funlinkat",			/* 568 = funlinkat */
	"copy_file_range",			/* 569 = copy_file_range */
	"freebsd32___sysctlbyname",			/* 570 = freebsd32___sysctlbyname */
	"shm_open2",			/* 571 = shm_open2 */
	"shm_rename",			/* 572 = shm_rename */
	"sigfastblock",			/* 573 = sigfastblock */
	"__realpathat",			/* 574 = __realpathat */
	"close_range",			/* 575 = close_range */
	"rpctls_syscall",			/* 576 = rpctls_syscall */
	"__specialfd",			/* 577 = __specialfd */
	"freebsd32_aio_writev",			/* 578 = freebsd32_aio_writev */
	"freebsd32_aio_readv",			/* 579 = freebsd32_aio_readv */
	"fspacectl",			/* 580 = fspacectl */
	"sched_getcpu",			/* 581 = sched_getcpu */
	"swapoff",			/* 582 = swapoff */
	"kqueuex",			/* 583 = kqueuex */
	"#584",			/* 584 = nosys */
	"#585",			/* 585 = nosys */
	"#586",			/* 586 = nosys */
	"#587",			/* 587 = nosys */
	"#588",			/* 588 = nosys */
	"#589",			/* 589 = nosys */
	"#590",			/* 590 = nosys */
	"#591",			/* 591 = nosys */
	"#592",			/* 592 = nosys */
	"#593",			/* 593 = nosys */
	"#594",			/* 594 = nosys */
	"#595",			/* 595 = nosys */
	"#596",			/* 596 = nosys */
	"#597",			/* 597 = nosys */
	"#598",			/* 598 = nosys */
	"#599",			/* 599 = nosys */
	"#600",			/* 600 = nosys */
	"#601",			/* 601 = nosys */
	"#602",			/* 602 = nosys */
	"#603",			/* 603 = nosys */
	"#604",			/* 604 = nosys */
	"#605",			/* 605 = nosys */
	"#606",			/* 606 = nosys */
	"#607",			/* 607 = nosys */
	"#608",			/* 608 = nosys */
	"#609",			/* 609 = nosys */
	"_kernelrpc_mach_vm_allocate_trap",			/* 610 = _kernelrpc_mach_vm_allocate_trap */
	"#611",			/* 611 = nosys */
	"_kernelrpc_mach_vm_deallocate_trap",			/* 612 = _kernelrpc_mach_vm_deallocate_trap */
	"#613",			/* 613 = nosys */
	"_kernelrpc_mach_vm_protect_trap",			/* 614 = _kernelrpc_mach_vm_protect_trap */
	"_kernelrpc_mach_vm_map_trap",			/* 615 = _kernelrpc_mach_vm_map_trap */
	"_kernelrpc_mach_port_allocate_trap",			/* 616 = _kernelrpc_mach_port_allocate_trap */
	"_kernelrpc_mach_port_destroy_trap",			/* 617 = _kernelrpc_mach_port_destroy_trap */
	"_kernelrpc_mach_port_deallocate_trap",			/* 618 = _kernelrpc_mach_port_deallocate_trap */
	"_kernelrpc_mach_port_mod_refs_trap",			/* 619 = _kernelrpc_mach_port_mod_refs_trap */
	"_kernelrpc_mach_port_move_member_trap",			/* 620 = _kernelrpc_mach_port_move_member_trap */
	"_kernelrpc_mach_port_insert_right_trap",			/* 621 = _kernelrpc_mach_port_insert_right_trap */
	"_kernelrpc_mach_port_insert_member_trap",			/* 622 = _kernelrpc_mach_port_insert_member_trap */
	"_kernelrpc_mach_port_extract_member_trap",			/* 623 = _kernelrpc_mach_port_extract_member_trap */
	"_kernelrpc_mach_port_construct_trap",			/* 624 = _kernelrpc_mach_port_construct_trap */
	"_kernelrpc_mach_port_destruct_trap",			/* 625 = _kernelrpc_mach_port_destruct_trap */
	"mach_reply_port",			/* 626 = mach_reply_port */
	"thread_self_trap",			/* 627 = thread_self_trap */
	"task_self_trap",			/* 628 = task_self_trap */
	"host_self_trap",			/* 629 = host_self_trap */
	"#630",			/* 630 = nosys */
	"mach_msg_trap",			/* 631 = mach_msg_trap */
	"mach_msg_overwrite_trap",			/* 632 = mach_msg_overwrite_trap */
	"semaphore_signal_trap",			/* 633 = semaphore_signal_trap */
	"semaphore_signal_all_trap",			/* 634 = semaphore_signal_all_trap */
	"semaphore_signal_thread_trap",			/* 635 = semaphore_signal_thread_trap */
	"semaphore_wait_trap",			/* 636 = semaphore_wait_trap */
	"semaphore_wait_signal_trap",			/* 637 = semaphore_wait_signal_trap */
	"semaphore_timedwait_trap",			/* 638 = semaphore_timedwait_trap */
	"semaphore_timedwait_signal_trap",			/* 639 = semaphore_timedwait_signal_trap */
	"#640",			/* 640 = nosys */
	"_kernelrpc_mach_port_guard_trap",			/* 641 = _kernelrpc_mach_port_guard_trap */
	"_kernelrpc_mach_port_unguard_trap",			/* 642 = _kernelrpc_mach_port_unguard_trap */
	"obs_nil",			/* 643 = obsolete  */
	"task_name_for_pid",			/* 644 = task_name_for_pid */
	"task_for_pid",			/* 645 = task_for_pid */
	"pid_for_task",			/* 646 = pid_for_task */
	"#647",			/* 647 = nosys */
	"macx_swapon",			/* 648 = macx_swapon */
	"macx_swapoff",			/* 649 = macx_swapoff */
	"#650",			/* 650 = nosys */
	"macx_triggers",			/* 651 = macx_triggers */
	"macx_backing_store_suspend",			/* 652 = macx_backing_store_suspend */
	"macx_backing_store_recovery",			/* 653 = macx_backing_store_recovery */
	"#654",			/* 654 = nosys */
	"#655",			/* 655 = nosys */
	"#656",			/* 656 = nosys */
	"#657",			/* 657 = nosys */
	"#658",			/* 658 = nosys */
	"swtch_pri",			/* 659 = swtch_pri */
	"swtch",			/* 660 = swtch */
	"thread_switch",			/* 661 = thread_switch */
	"clock_sleep_trap",			/* 662 = clock_sleep_trap */
	"#663",			/* 663 = nosys */
	"#664",			/* 664 = nosys */
	"#665",			/* 665 = nosys */
	"#666",			/* 666 = nosys */
	"#667",			/* 667 = nosys */
	"#668",			/* 668 = nosys */
	"#669",			/* 669 = nosys */
	"#670",			/* 670 = nosys */
	"#671",			/* 671 = nosys */
	"#672",			/* 672 = nosys */
	"#673",			/* 673 = nosys */
	"#674",			/* 674 = nosys */
	"#675",			/* 675 = nosys */
	"#676",			/* 676 = nosys */
	"#677",			/* 677 = nosys */
	"#678",			/* 678 = nosys */
	"#679",			/* 679 = nosys */
	"#680",			/* 680 = nosys */
	"#681",			/* 681 = nosys */
	"#682",			/* 682 = nosys */
	"#683",			/* 683 = nosys */
	"#684",			/* 684 = nosys */
	"#685",			/* 685 = nosys */
	"#686",			/* 686 = nosys */
	"#687",			/* 687 = nosys */
	"#688",			/* 688 = nosys */
	"mach_timebase_info",			/* 689 = mach_timebase_info */
	"mach_wait_until",			/* 690 = mach_wait_until */
	"mk_timer_create",			/* 691 = mk_timer_create */
	"mk_timer_destroy",			/* 692 = mk_timer_destroy */
	"mk_timer_arm",			/* 693 = mk_timer_arm */
	"mk_timer_cancel",			/* 694 = mk_timer_cancel */
	"#695",			/* 695 = nosys */
	"#696",			/* 696 = nosys */
	"#697",			/* 697 = nosys */
	"#698",			/* 698 = nosys */
	"#699",			/* 699 = nosys */
	"#700",			/* 700 = nosys */
	"#701",			/* 701 = nosys */
	"#702",			/* 702 = nosys */
	"#703",			/* 703 = nosys */
	"#704",			/* 704 = nosys */
	"#705",			/* 705 = nosys */
	"#706",			/* 706 = nosys */
	"#707",			/* 707 = nosys */
	"#708",			/* 708 = nosys */
	"#709",			/* 709 = nosys */
	"#710",			/* 710 = nosys */
	"#711",			/* 711 = nosys */
	"#712",			/* 712 = nosys */
	"#713",			/* 713 = nosys */
	"#714",			/* 714 = nosys */
	"#715",			/* 715 = nosys */
	"#716",			/* 716 = nosys */
	"#717",			/* 717 = nosys */
	"#718",			/* 718 = nosys */
	"#719",			/* 719 = nosys */
	"#720",			/* 720 = nosys */
};
