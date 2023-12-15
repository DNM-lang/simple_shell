#include "shell.h"

/**
 * execute_comnd - Execute a command
 * @fullpath: the executable path
 * @tokens: user input tokenized
 * Return: 0
 */

int execute_comnd(char *fullpath, char **tokens)
{
	pid_t our_pid;
	int stats, status_excev;
	char **envp = environ;

	our_pid = fork();
	if (our_pid == -1)
	{
		errors(1);
		exit(EXIT_FAILURE);
	}
	if (our_pid == 0)
	{
		status_excev = execve(fullpath, tokens, envp);
		if (status_excev == -1)
			return (-1);
	}
	else
	{
		wait(&stats);
	}
	return (0);
}
