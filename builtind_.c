#include "shell.h"

/**
 * exits_the_shell - Exits the shell.
 * Return: -1
 */

int exits_the_shell(void)
{
	return (-1);
}

/**
 * enviro_vars - Prints environment variables.
 * Return:  0
 */

int enviro_vars(void)
{
	unsigned int j = 0;
	ssize_t write_results;

	while (environ[j] != NULL)
	{
		write_results = write(STDOUT_FILENO, environ[j], _strlen(environ[j]));
		(void)write_results;
		write_results = write(STDOUT_FILENO, "\n", 1);
		(void)write_results;
		j++;
	}
	return (0);
}
