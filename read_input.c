#include "shell.h"

/**
 * read_input - reads input
 * Return: read line
 */

char *read_input(void)
{
	char *line = NULL;
	size_t length = 0;

	if (getline(&line, &length, stdin) == -1)
	{
		free(line);
		return (NULL);
	}
	line[strcspn(line, "\n")] = '\0';
	return (line);
}
