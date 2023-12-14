#include "main.h"

/**
 * executable_command - executes a command
 * @input: input
 */

void executable_command(char *input)
{
	if (_strcmp(input, "exit") == 0)
	{
		printf("$\n");
		exit(EXIT_SUCCESS);
	}
	else
	{
		executed_command(input);
	}
}

/**
 * executed_command - executes commands
 * @command: command to be executed
 */

void executed_command(char *command)
{
	pid_t our_pid = fork();

	if (our_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}

	if (our_pid == 0)
	{
		char *token = strtok(command, " ");
		char **args = (char **)malloc(sizeof(char *));
		int argCt = 0;

		while (token != NULL)
		{
			args[argCt] = token;
			argCt++;

			args = (char **)realloc(args, (argCt + 1) * sizeof(char *));
			token = strtok(NULL, " ");
		}
		args[argCt] = NULL;
		execvp(args[0], args);
		perror("Error executing command");
		exit(EXIT_FAILURE);
	}
	else
	{
		int status;

		waitpid(our_pid, &status, 0);
	}
}


/**
 * customized_exit - print farewll message
 */

void customized_exit(void)
{
	printf("$ \n");
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
