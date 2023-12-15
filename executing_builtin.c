#include "shell.h"

/**
 * exec_built_comnd - Execute built in commands
 * @tokenz: Argument
 * Return: value
 */
int exec_built_comnd(char **tokenz)
{
	int stats;
	unsigned int len, n, j;
	buiild_t builts[] = {
		{"exit", exits_the_shell},
		{"env", enviro_vars},
		{NULL, NULL}
	};
	if (tokenz[0] == NULL)
		return (1);
	len = _strlen(tokenz[0]);
	n = no_of_builtins(builts);
	for (j = 0; j < n; j++)
	{
		if (_strcmp(tokenz[0], builts[j].name, len) == 0)
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
