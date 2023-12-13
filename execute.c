#include "main.h"

void execute_command(char *input)
{
	char *args[MAX_INPUT_SIZE];
	int i = 0;
	char *token = strtok(input, " \n");
	
	while (token != NULL)
	{
		args[i++] = token;
		token = strtok(NULL, " \n");
	}
	args[i] = NULL;
	if (i > 0)
	{
		execute_builtin(args[0]);
	}
	else
	{
		printf("Command not entered.\n");
	}
}
void execute_builtin(char *command)
{
	if (_strcmp(command, "exit") == 0)
	{
		custom_exit();
	}
	else if (_strcmp(command, "env") == 0)
	{
		print_environment();
	}
	else
	{
		printf("Built-in command unknown: %s\n", command);
	}
}
void custom_exit() {
	printf("Exiting shell \n");
	exit(EXIT_SUCCESS);
}
void custom__exit(int status)
{
	_exit(status);
}
void print_environment()
{
	extern char **environ;
	
	for (char **env = environ; *env != NULL; env++)
	{
		printf("%s\n", *env);
	}
}
