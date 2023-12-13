#include "main.h"

/**
 * main - main
 * Return: 0
 */

int main(void)
{
	while (1)
	{
		display_prompt();

		char input[MAX_INPUT_SIZE];

		if (fgets(input, sizeof(input), stdin) == NULL)
		{
			printf("\nExiting shell. Bye!\n");
			break;
		}
		input[strcspn(input, "\n")] = '\0';
		execute_command(input);
	}
	return (0);
}
