#include "shell.h"

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
	pid_t pid = fork();

    if (pid == 0) {
        execlp(command, command, (char *)NULL);
        perror("Error");
        exit(EXIT_FAILURE);
    } else if (pid < 0) {
        perror("Error");
        exit(EXIT_FAILURE);
    } else {
        wait(NULL);
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
