#include "shell.h"

/**
 * exec_built_comnd - Execute built in commands
 * @tokens: Argument
 * Return: value
 */
int exec_built_comnd(char **tokens)
{
	int stats;
	unsigned int len;
	unsigned int n;
	unsigned int j;
	buiild_t builts[] = {
		{"exit", exits_the_shell},
		{"env", enviro_vars},
		{NULL, NULL}
	};
	if (tokens[0] == NULL)
		return (1);
	len = _strlen(tokens[0]);
	n = no_of_builtins(builts);
	for (j = 0; j < n; j++)
	{
		if (_strcmp(tokens[0], builts[j].name, len) == 0)
		{
			stats = (builts[j].p)();
			return (stats);
		}
	}
	return (1);
}

/**
 * no_of_builtins - no of builtins
 * @builts: Array conatining built-in commands
 * Return: no of built-in commands
 */

int no_of_builtins(built_s builts[])
{
	unsigned int k = 0;

	while (builts[k].name != NULL)
		k++;
	return (k);
}
