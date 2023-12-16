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
			if (write(STDERR_FILENO, FORK_ERROR, _strlen(FORK_ERROR)) == -1)
			{
				perror("write");
				exit(EXIT_FAILURE);
			}
			perror("Fork error");
			break;
		case 2:
			perror("error");
			break;
		case 3:
			if (write(STDERR_FILENO, MALLOC_ERROR, _strlen(MALLOC_ERROR)) == -1)
			{
				perror("write");
				exit(EXIT_FAILURE);
			}
			break;
		case 4:
			if (write(STDERR_FILENO, PATH_ERROR, _strlen(PATH_ERROR)) == -1)
			{
				perror("write");
				exit(EXIT_FAILURE);
			}
			break;
		default:
			break;
	}
}
