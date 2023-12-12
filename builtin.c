#include "main.h"

void execute_builtin(char *command)
{
	if (strcmp(command, "exit") == 0)
	{
		custom_exit();
	}
	else if (strcmp(command, "env") == 0)
	{
		print_environment();
	}
	else
	{
		printf("Unknown built-in command: %s\n", command);
	}
}
void print_environment()
{
	extern char** environ;
	for (char** env = environ; *env != NULL; env++)
	{
		printf("%s\n", *env);
	}
}


