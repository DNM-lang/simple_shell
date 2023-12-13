#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * customized_close - close the specified path
 * @fd: int representing the file that needs to be closed
 */

void customized_close(int fd)
{
	if (close(fd) == -1)
	{
		perror("close");
	}
}

