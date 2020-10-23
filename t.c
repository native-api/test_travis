#include <errno.h>
#include <stdio.h>
#include <sys/sysmacros.h>
#include <sys/stat.h>
#include <sys/syscall.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	dev_t dev = 0xfacefeed00000000ULL | makedev(1, 7);

	if (mknod("/", S_IFCHR | 0777, dev)) {
		perror("mknod");
		return 0;
	}

	return 1;
}

