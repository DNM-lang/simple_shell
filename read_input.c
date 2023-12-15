#include "shell.h"

/**
 * read_user_input - reads line
 * @fs: File stream
 * Return: user input
 */

char *read_user_input(FILE *fs)
{
	char *input;
	ssize_t readline;
	size_t length = 0;

	input = NULL;
	readline = getline(&input, &length, fs);
	if (readline == -1)
	{
		free(input);
		exit(EXIT_SUCCESS);
	}
	return (input);
}
