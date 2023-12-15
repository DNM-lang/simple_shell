#include "shell.h"

/**
 * tokens - tokenizes a string
 * @s: User input
 * Return: Pointer to the array of tokens
 */
char **tokens(char *s)
{
	char **tokenz, *token;
	unsigned int i = 0;

	tokenz = malloc(sizeof(char) * BUFF);
	if (tokenz == NULL)
	{
		err_msg(3);
		exit(EXIT_FAILURE);
	}

	token = strtok(s, "\n\t\r ");

	while (token != NULL)
	{
		tokenz[i] = token;
		token = strtok(NULL, "\n\t\r ");
		i++;
	}
	tokenz[i] = NULL;
	return (tokenz);
}
