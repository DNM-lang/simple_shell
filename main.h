#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_INPUT_SIZE 1024

void display_prompt(void);
void execute_command(char *input);
void customized_access(char *path, int mode);
void customized_chdir(char *path);
void customized_close(int fd);
void executable_builtin(char *command);
void print_environment_variables(void);
void customized_exit(void);
void customize__exit(int status);
char *find_executable_file(char *command);
char *_strdup(char *s);
int _strcmp(char *s1, char *s2);
#endif
