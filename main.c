#include "main.h"

/**
 * main - main
 * @argc: arg counter
 * @argv: arg vector
 * Return: 0
 */

int main() {
    char input[MAX_INPUT_SIZE];

    while (1) {
        display_prompt();

        if (fgets(input, sizeof(input), stdin) == NULL) {
            printf("\n$\n");
            break;
        }

        input[strcspn(input, "\n")] = '\0';
        
        executed_command(input);
    }

    return 0;
}

/**
 * display_prompt - displays prompt message
 */

void display_prompt(void)
{
	printf("$ ");
}
