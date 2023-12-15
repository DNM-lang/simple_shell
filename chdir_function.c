#include <unistd.h>
#include <stdio.h>
#include "shell.h"

/**
 * customized_chdir - change the working directory to the specific path
 * @path: string representing the file path that you want to check accesibility
 */

void customized_chdir(char *path)
{
	if (chdir(path) == -1)
	{
		perror("chdir");
	}
}

