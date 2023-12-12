#include <unistd.h>
#include <stdio.h>
#include "main.h"

void custom_chdir(char *path)
{
	if (chdir(path) == -1)
	{
		perror("chdir");
	}
}

