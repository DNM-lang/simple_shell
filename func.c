#include "shell.h"

/**
 * display_prompt - Displays the shell prompt.
 */
void display_shell_prompt() {
    ssize_t write_result = write(STDOUT_FILENO, "simple_shell $ ", 15);
    if (write_result == -1) {
        perror("write");
        _exit(EXIT_FAILURE);
    }
}

/**
 * execute_shell_command - Executes a shell command.
 * @input: The command to be executed.
 */
void execute_shell_command(char *input) {
    pid_t pid;
    int status;

    if (input == NULL) {
        display_shell_prompt();
        return;
    }

    input[strcspn(input, "\n")] = 0;

    pid = fork();

    if (pid == 0) {
        if (execlp(input, input, (char *)NULL) == -1) {
            char error_message[30] = "Command not found: ";
            ssize_t write_result = write(STDERR_FILENO, error_message, strlen(error_message));
            ssize_t write_input = write(STDERR_FILENO, input, strlen(input));
            ssize_t write_newline = write(STDERR_FILENO, "\n", 1);

            if (write_result == -1 || write_input == -1 || write_newline == -1) {
                perror("write");
            }

            _exit(EXIT_FAILURE);
        }
    } else if (pid < 0) {
        perror("simple_shell");
    } else {
        do {
            waitpid(pid, &status, WUNTRACED);
        } while (!WIFEXITED(status) && !WIFSIGNALED(status));
    }

    display_shell_prompt();
}

