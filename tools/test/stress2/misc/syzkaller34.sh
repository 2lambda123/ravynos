#!/bin/sh

# Fixed by git: 208256579804 - main - O_PATH: disable kqfilter for fifos
# Submitted by markj@

[ `uname -p` != "amd64" ] && exit 0

. ../default.cfg
cat > /tmp/syzkaller34.c <<EOF
// autogenerated by syzkaller (https://github.com/google/syzkaller)

#define _GNU_SOURCE

#include <sys/types.h>

#include <pwd.h>
#include <signal.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/endian.h>
#include <sys/syscall.h>
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>

static void kill_and_wait(int pid, int* status)
{
  kill(pid, SIGKILL);
  while (waitpid(-1, status, 0) != pid) {
  }
}

static void sleep_ms(uint64_t ms)
{
  usleep(ms * 1000);
}

static uint64_t current_time_ms(void)
{
  struct timespec ts;
  if (clock_gettime(CLOCK_MONOTONIC, &ts))
    exit(1);
  return (uint64_t)ts.tv_sec * 1000 + (uint64_t)ts.tv_nsec / 1000000;
}

static void execute_one(void);

#define WAIT_FLAGS 0

static void loop(void)
{
  int iter = 0;
  for (;; iter++) {
    int pid = fork();
    if (pid < 0)
      exit(1);
    if (pid == 0) {
      execute_one();
      exit(0);
    }
    int status = 0;
    uint64_t start = current_time_ms();
    for (;;) {
      if (waitpid(-1, &status, WNOHANG | WAIT_FLAGS) == pid)
        break;
      sleep_ms(1);
      if (current_time_ms() - start < 5000) {
        continue;
      }
      kill_and_wait(pid, &status);
      break;
    }
  }
}

uint64_t r[1] = {0xffffffffffffffff};

void execute_one(void)
{
  intptr_t res = 0;
  memcpy((void*)0x20000000, "./file0\000", 8);
  syscall(SYS_mknodat, 0xffffff9c, 0x20000000ul, 0x1000ul, 0ul);
  memcpy((void*)0x20000040, "./file0\000", 8);
  syscall(SYS_open, 0x20000040ul, 0x400000ul, 0x72ul);
  res = syscall(SYS_kqueue);
  if (res != -1)
    r[0] = res;
  *(uint64_t*)0x20000100 = 3;
  *(uint16_t*)0x20000108 = -1;
  *(uint16_t*)0x2000010a = 0x4015;
  *(uint32_t*)0x2000010c = 0;
  *(uint64_t*)0x20000110 = 0x400000000;
  *(uint64_t*)0x20000118 = 5;
  *(uint64_t*)0x20000120 = 4;
  *(uint64_t*)0x20000128 = 0;
  *(uint64_t*)0x20000130 = 0;
  *(uint64_t*)0x20000138 = 0;
  syscall(SYS_kevent, r[0], 0x20000100ul, 0x2cul, 0ul, 0ul, 0ul);
}
int main(void)
{
  syscall(SYS_mmap, 0x20000000ul, 0x1000000ul, 7ul, 0x1012ul, -1, 0ul);
  loop();
  return 0;
}


EOF
mycc -o /tmp/syzkaller34 -Wall -Wextra -O0 /tmp/syzkaller34.c ||
    exit 1

(cd /tmp; timeout 3m ./syzkaller34)

rm -rf /tmp/syzkaller34 /tmp/syzkaller34.c /tmp/syzkaller.*
exit 0
