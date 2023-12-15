#include "shell.h"

/**
 * main - main program
 * Return: 0
 */

int main(void)
{
	char *input, *fpath, **tokenz, path = get_env("PATH");
	int built_stat, child_stat, d = 0;
	struct stat buffer;

	while (TRUE)
	{
		pliz_interact(STDIN_FILENO, buf);
		input = read_user_input(stdin);
		if (_strcmp(input, "\n", 1) == 0)
		{
			free(input);
			continue;
		}
		tokenz = tokens(input);
		if (tokenz[0] == NULL)
		{
			free(tokenz);
			continue;
		}
		built_stat = exec_built_comnd(tokenz);
		if (built_stat == 0 || built_stat == -1)
		{
			free(tokenz);
			free(input);
		}
		if (built_stat == 0)
			continue;
		if (built_stat == -1)
			_exit(EXIT_SUCCESS);
		fpath = which_path(tokenz[0], fpath, path);
		if (fpath == NULL)
			fpath = tokenz[0];
		else
			d = 1;
		child_stat = child(fpath, tokenz);
		if (child_stat == -1)
			err_msg(2);
		free_allc_me(tokenz, path, input, fpath, d)
	}
	return (0);
}
