#include "main.h"

/**
 * executable command - executes a command
 * @input: input
 */

void executable_command(char *input)
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
		executable_builtin(args[0]);
	}
	else
	{
		printf("Command not entered.\n");
	}
}

/**
 * customized_exit - print farewll message
 */

 void customized_exit(void) 
{
        printf("Exiting shell. BYe \n");
        exit(EXIT_SUCCESS);
}

/**
 * customize__exit - terminates program
 * @status: exit status of process
 */

void customize__exit(int status)
{
	_exit(status);
}
