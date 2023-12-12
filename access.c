#include <unistd.h>
#include <stdio.h>
#include "main.h"

void custom_access(char *path, int mode)
{
	if (access(path, mode) == -1)
	{
		perror("access");
	}
}

