#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

#define TRUE 1
#define PROMPT "$ "
#define BUFF 1024
#define MALLOC_ERROR "Unable to malloc space\n"
#define FORK_ERROR "Unable to fork and create child process\n"
#define PATH_ERROR "No such file or directory\n"
#define PROMPT "simpleShell$ "
extern char **environ;

/**
 * struct buiild_t - linked list of builtins
 * @name: name
 * @p: pointer to function
**/

typedef struct buiild_t
{
	char *name;
	int (*p)(void);
} buiild_t;

/**
 * struct list_s - linked list of variables
 * @val: value
 * @next: pointer to next node
**/

typedef struct list_s
{
	char *val;
	struct list_s *next;
} list_s;

int no_of_builtins(buiild_t builts[]);
int exec_built_comnd(char **tokenz);
int exits_the_shell(void);
int enviro_vars(void);
int execute_comnd(char *fpath, char **tokenz);
void err_msg(int errno);
void free_allc_me(char **tokenz, char *path, char *input, char *fpath, int f);
void free_dub_point(char **array, unsigned int len);
int _strcmp(char *name, char *var, unsigned int len);
int _strncmp(char *name, char *var, unsigned int len);
char *_strncpy(char *dest, char *src);
int _strlen(char *s);
char **tokens(char *s);
char *read_user_input(FILE *fs);
ssize_t customised_getline(FILE *fs, char **line, size_t *length)
void pliz_interact(int fs, struct stat buffer);
void _puts(char *s);
int main(void);
char *look_for_path(char *command, char *fpath, char *path);
char **copy_env_var(char **env_cpy, unsigned int env_len);
char *env_var(const char *name);
#endif

