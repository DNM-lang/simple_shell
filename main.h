#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_INPUT_SIZE 1024

void display_prompt();
void execute_command(char *input);
void custom_access(char *path, int mode);
void custom_chdir(char *path);
void custom_close(int fd);
void custom_exit();
void execute_builtin(char *command);
void print_environment();
void custom_exit(int status);
void custom__exit(int status);
char* find_executable(char *command);
#endif
