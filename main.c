#include "shell.h"

/**
 * main - Entry point for the simple shell program
 *
 * Return: Always 0 (Success)
 */
int main() {
    char input[MAX_INPUT_SIZE];
    ssize_t read_bytes;

    while (1) {
        display_shell_prompt();

        read_bytes = read(STDIN_FILENO, input, sizeof(input));
        if (read_bytes == -1) {
            perror("read");
            _exit(EXIT_FAILURE);
        }

        if (read_bytes == 0) {
            ssize_t write_result = write(STDOUT_FILENO, "\n", 1);
            if (write_result == -1) {
                perror("write");
                _exit(EXIT_FAILURE);
            }
            break;
        }

        execute_shell_command(input);
    }

    return 0;
}

