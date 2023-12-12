# Simple Shell Project

# Simple Shell Project

This is a simple UNIX command line interpreter (shell) written in C. The shell is designed to meet basic requirements for a command line interface while keeping the implementation straightforward.

## Features

- Display a prompt and wait for the user to type a command.
- Handles command lines with arguments.
- Checks for the existence of the command in the PATH.
- Implements built-in commands: `exit` and `env`.
- Prints the current environment variables with the `env` command.
- Handles the "end of file" condition (Ctrl+D).
- Displays a new prompt after each command execution.
- Handles errors gracefully.

## Project Structure

- `shell.h`: Header file containing function prototypes and constant definitions.
- `main.c`: Main source file containing the entry point and `main` function.
- `execute.c`: Source file containing functions related to command execution.
- `builtin.c`: Source file containing functions for built-in commands.

## Usage

To compile the Simple Shell project:

```bash
gcc -o shell main.c execute.c builtin.c -lm

./shell
