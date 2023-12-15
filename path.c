#include "shell.h"

/**
 * look_for_path - Looks for a path
 * @command: Command
 * @fpath: Full path of the command
 * @path: Path variable
 * Return: Full path of the command
 */

char *look_for_path(char *command, char *fpath, char *path)
{
	unsigned int comnd_len, p_len, o_len;
	char *path_cpy, *token;

	comnd_len = _strlen(command);
	o_len = _strlen(path);
	path_cpy = malloc(sizeof(char) * o_len + 1);
	if (path_cpy == NULL)
	{
		err_msg(3);
		return (NULL);
	}
	_strncpy(path_cpy, path);
	token = strtok(path_cpy, ":");
	if (token == NULL)
		token = strtok(NULL, ":");
	while (token != NULL)
	{
		p_len = _strlen(token);
		fpath = malloc(sizeof(char) * (p_len + comnd_len) + 2);
		if (fpath == NULL)
		{
			err_msg(3);
			return (NULL);
		}
		_strncpy(fpath, token);
		fpath[p_len] = '/';
		_strncpy(fpath + p_len + 1, command);
		fpath[p_len + comnd_len + 1] = '\0';
		if (access(fpath, X_OK) != 0)
		{
			free(fpath);
			fpath = NULL;

			token = strtok(NULL, ":");
		}
		else
			break;
	}
	free(path_cpy);
	return (fpath);
}
