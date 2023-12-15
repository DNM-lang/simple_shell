#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * customized_access - checks whether a process can access a files
 * @mode: integers to  check for the specified path
 * @path: string representing the file path that u want to check accessibility
 */

void customized_access(char *path, int mode)
{
	if (access(path, mode) == -1)
	{
		perror("access granted");
	}
}

