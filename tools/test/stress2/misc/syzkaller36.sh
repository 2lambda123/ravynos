#!/bin/sh

# panic: IV outside buffer length
# cpuid = 22
# time = 1620355853
# KDB: stack backtrace:
# db_trace_self_wrapper() at db_trace_self_wrapper+0x2b/frame 0xfffffe01af19d5d0
# vpanic() at vpanic+0x181/frame 0xfffffe01af19d620
# panic() at panic+0x43/frame 0xfffffe01af19d680
# crp_sanity() at crp_sanity+0x212/frame 0xfffffe01af19d6b0
# crypto_dispatch() at crypto_dispatch+0xf/frame 0xfffffe01af19d6d0
# crypto_ioctl() at crypto_ioctl+0x18a9/frame 0xfffffe01af19d7e0
# devfs_ioctl() at devfs_ioctl+0xcd/frame 0xfffffe01af19d830
# VOP_IOCTL_APV() at VOP_IOCTL_APV+0x59/frame 0xfffffe01af19d850
# vn_ioctl() at vn_ioctl+0x133/frame 0xfffffe01af19d960
# devfs_ioctl_f() at devfs_ioctl_f+0x1e/frame 0xfffffe01af19d980
# kern_ioctl() at kern_ioctl+0x289/frame 0xfffffe01af19d9f0
# sys_ioctl() at sys_ioctl+0x12a/frame 0xfffffe01af19dac0
# amd64_syscall() at amd64_syscall+0x147/frame 0xfffffe01af19dbf0
# fast_syscall_common() at fast_syscall_common+0xf8/frame 0xfffffe01af19dbf0
# --- syscall (0, FreeBSD ELF64, nosys), rip = 0x8003827da, rsp = 0x7fffffffe4f8, rbp = 0x7fffffffe540 ---
# KDB: enter: panic
# [ thread pid 2908 tid 100493 ]
# Stopped at      kdb_enter+0x37: movq    $0,0x1282a9e(%rip)
# db> x/s version
# version: FreeBSD 14.0-CURRENT #1 main-n246506-be578b67b5a: Thu May  6 19:40:29 CEST 2021
# pho@t2.osted.lan:/usr/src/sys/amd64/compile/PHO
# db>

[ `uname -p` != "amd64" ] && exit 0
[ `id -u ` -ne 0 ] && echo "Must be root!" && exit 1

. ../default.cfg
cat > /tmp/syzkaller36.c <<EOF
// https://syzkaller.appspot.com/bug?id=89267af3fd2bf65e173bbb9d69db050f29cba168
// autogenerated by syzkaller (https://github.com/google/syzkaller)
// Reported-by: syzbot+c9e8f6ff5cb7fa6a1250@syzkaller.appspotmail.com

#define _GNU_SOURCE

#include <pwd.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/endian.h>
#include <sys/syscall.h>
#include <unistd.h>

uint64_t r[1] = {0xffffffffffffffff};

int main(void)
{
  syscall(SYS_mmap, 0x20000000ul, 0x1000000ul, 7ul, 0x1012ul, -1, 0ul);
  intptr_t res = 0;
  memcpy((void*)0x20000000, "/dev/crypto\000", 12);
  res = syscall(SYS_openat, 0xffffffffffffff9cul, 0x20000000ul, 0ul, 0ul);
  if (res != -1)
    r[0] = res;
  *(uint32_t*)0x20000440 = 0x17;
  *(uint32_t*)0x20000444 = 0;
  *(uint32_t*)0x20000448 = 0x10;
  *(uint64_t*)0x20000450 = 0x200001c0;
  memcpy((void*)0x200001c0,
         "\x3c\x02\x2e\x61\x79\x2e\xec\xb0\x7f\x8a\xee\x18\xe5\xaa\x35\x05",
         16);
  *(uint32_t*)0x20000458 = 0;
  *(uint64_t*)0x20000460 = 0;
  *(uint32_t*)0x20000468 = 0;
  *(uint32_t*)0x2000046c = 0xfdffffff;
  *(uint32_t*)0x20000470 = 0;
  *(uint32_t*)0x20000474 = 0;
  *(uint32_t*)0x20000478 = 0;
  *(uint32_t*)0x2000047c = 0;
  syscall(SYS_ioctl, r[0], 0xc040636aul, 0x20000440ul);
  *(uint32_t*)0x20000180 = 0;
  *(uint16_t*)0x20000184 = 1;
  *(uint16_t*)0x20000186 = 0;
  *(uint32_t*)0x20000188 = 7;
  *(uint64_t*)0x20000190 = 0x20000200;
  *(uint64_t*)0x20000198 = 0;
  *(uint64_t*)0x200001a0 = 0;
  *(uint64_t*)0x200001a8 = 0;
  syscall(SYS_ioctl, r[0], 0xc0306367ul, 0x20000180ul);
  return 0;
}
EOF
mycc -o /tmp/syzkaller36 -Wall -Wextra -O0 /tmp/syzkaller36.c ||
    exit 1

kldload cryptodev.ko && loaded=1
(cd /tmp; timeout 3m ./syzkaller36)
[ $loaded ] && kldunload cryptodev.ko

rm -rf /tmp/syzkaller36 /tmp/syzkaller36.c /tmp/syzkaller.*
exit 0
