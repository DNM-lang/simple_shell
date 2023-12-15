#include "shell.h"

/**
 * err_msg - prints error message
 * @errno: Error number
 */
void err_msg(int errno)
{
	switch (errno)
	{
		case 1:
			write(STDERR_FILENO, FORK_ERROR, _strlen(FORK_ERROR));
			perror("Fork error");
			break;
		case 2:
			perror("error");
			break;
		case 3:
			write(STDERR_FILENO, MALLOC_ERROR, _strlen(MALLOC_ERROR));
			break;
		case 4:
			write(STDERR_FILENO, PATH_ERROR, _strlen(PATH_ERROR));
			break;
		default:
			break;
	}
}
