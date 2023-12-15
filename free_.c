#include "shell.h"

/**
 * free_dub_point - frees a double pointer
 * @array: Array to be freed
 * @len: Length of the array
 */

void free_dub_point(char **array, unsigned int len)
{
	unsigned int j;

	for (j = 0; j < len; j++)
	{
		free(array[j]);
	}
	free(array);
}

/**
 * free_allc_me - Frees allocated memory
 * @tokens: Tokenized user input
 * @path: path
 * @line: user input
 * @fullpath: full path
 * @f: Flag indicating if fullpath was dynamically allocated
 */

void free_allc_me(char **tokens, char *path, char *line, char *fullpath, int f)
{
	free(line);
	free(path);
	free(tokens);

	if (f == 1)
		free(fullpath);
}
