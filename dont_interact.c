#include "main.h"

/**
 * dont_interact_mode - not interactive
 * @file: file
 */

void dont_interact_mode(FILE *file)
{
	char *input;
	char line[MAX_INPUT_SIZE];

	while (1)
	{
		display_prompt();

		if (fgets(line, sizeof(line), file) == NULL)
			break;


		line[strcspn(line, "\n")] = '\0';
		input = strdup(line);

		if (_strcmp(input, "exit") == 0)
		{
			printf("$\n");
			free(input);
			break;
		}

		executed_command(input);
		free(input);
	}
}
