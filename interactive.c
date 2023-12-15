#include "shell.h"

/**
 * pliz_interact_mode - interacts
 */

void pliz_interact_mode(void)
{
	char *input;

	while (1)
	{
	display_prompt();
	input = read_input();

	if (input == NULL)
	{
		printf("$ \n");
		break;
	}
	if (_strcmp(input, "exit") == 0)
	{
	printf("$ \n");
	free(input);
	exit(EXIT_SUCCESS);
	}

	executed_command(input);
	free(input);
	}
}
