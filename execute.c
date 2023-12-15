#include "shell.h"

/**
 * execute_comnd - Execute a command
 * @fpath: the executable path
 * @tokenz: user input tokenized
 * Return: 0
 */

int execute_comnd(char *fpath, char **tokenz)
{
	pid_t our_pid;
	int stats, status_excev;
	char **envp = environ;

	our_pid = fork();
	if (our_pid == -1)
	{
		err_msg(1);
		exit(EXIT_FAILURE);
	}
	if (our_pid == 0)
	{
		status_excev = execve(fpath, tokenz, envp);
		if (status_excev == -1)
			return (-1);
	}
	else
	{
		wait(&stats);
	}
	return (0);
}
