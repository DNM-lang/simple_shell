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

	while (environ[j] != NULL)
	{
		write(STDOUT_FILENO, environ[j], _strlen(environ[j]));
		write(STDOUT_FILENO, "\n", 1);
		j++;
	}
	return (0);
}
