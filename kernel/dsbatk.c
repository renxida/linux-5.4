#include <linux/syscalls.h>

SYSCALL_DEFINE1(circusx, int, x)
{
	return x + 3;
}