#include "main.h"

/**
 * main - main
 * Return: 0
 */

int main(void)
{
	display_prompt();

	while (1)
	{
		char input[MAX_INPUT_SIZE];

		if (fgets(input, sizeof(input), stdin) == NULL)
		{
			printf("\nExiting shell. Bye!\n");
			break;
		}
		input[strcspn(input, "\n")] = '\0';
		executable_command(input);
		display_prompt();
	}
	return (0);
}

/**
 * display_prompt - displays prompt message
 */

void display_prompt(void)
{
	printf("Shell prompt ");
	fflush(stdout);
}
