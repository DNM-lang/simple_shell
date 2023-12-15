#ifndef SHELL_H
#define SHELL_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdbool.h>

#define MAX_ARG 125;

int display_command(void);
char *getpath(char **env);
int exeCmd(char *argC[]);
int tokenize(char *command, char *argsC[]);
char *removedNC(char *str, int len);
#endif
