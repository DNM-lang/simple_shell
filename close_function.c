#include <unistd.h>
#include <stdio.h>
#include "main.h"

void custom_close(int fd)
{
	if (close(fd) == -1)
	{
		perror("close");
	}
}

