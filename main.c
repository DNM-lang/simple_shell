#include "main.h"

/**
 * main - main
 * @argc: arg counter
 * @argv: arg vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		pliz_interact_mode();
	}
	else if (argc == 2)
	{
		FILE *file = fopen(argv[1], "r");

		if (file == NULL)
		{

			perror("Error opening file");
			exit(EXIT_FAILURE);
		}
		dont_interact_mode(file);
		fclose(file);
	}
	else
	{
		fprintf(stderr, "Usage: %s [script]\n", argv[0]);
		exit(EXIT_FAILURE);
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
