#include "shell.h"

/**
 * executable_builtin - executes built in command
 * @command: built in command to be executed
 */

void executable_builtin(char *command)
{
	if (_strcmp(command, "exit") == 0)
	{
		customized_exit();
	}
	else if (_strcmp(command, "env") == 0)
	{
		print_environment_variables();
	}
	else
	{
		printf("Built-in command unknown: %s\n", command);
	}
}

/**
 * print_environment_variables - current enviroment variables
 */

void print_environment_variables(void)
{
	char **env;

	for (env = environ; *env != NULL; env++)
	{
		printf("%s\n", *env);
	}
}
