#include "shell.h"

/**
 * env_var - checks if the variable is in the environment
 * @name: Name of the environment variable to search for.
 * Return: The value of the environment variable if found,
 * otherwise NULL
 */
char *env_var(const char *name)
{
	char **env_cpy;
	char *var, *val, *path;
	int cmp;
	unsigned int p_len, env_len, len, i = 0;

	env_len = 0;
	while (environ[env_len] != NULL)
		env_len++;

	env_cpy = NULL;
	env_cpy = copy_env(env_cpy, env_len);
	len = _strlen((char *)name);
	while (env_cpy[i] != NULL)
	{
		var = env_cpy[i];
		cmp = _strncmp((char *)name, var, len);
		if (cmp == 1)
		{
			val = strtok(var, "=");
			val = strtok(NULL, "\n ");
			if (val == NULL)
			{
				err_msg(4);
				exit(EXIT_FAILURE);
			}
			p_len = _strlen(val);
			path = malloc(sizeof(char) * p_len + 1);
			if (path == NULL)
			{
				err_msg(3);
				return (NULL);
			}
			path = _strncpy(path, value);
			free_dub_point(env_cpy, env_len);
			return (path);
		}
		i++;
	}
	return (NULL);
}

/**
 * copy_env_var - copies enviro variable
 * @env_cpy: Environment variable
 * @env_len: Length of the environment variable
 * Return: Pointer to the environment variable or NULL
 */

char **copy_env_var(char **env_cpy, unsigned int env_len)
{
	char *var;
	unsigned int var_len, i = 0;

	env_cpy = malloc(sizeof(char **) * (env_len));
	if (env_cpy == NULL)
	{
		err_msg(3);
		return (NULL);
	}
	while (i < env_len)
	{
		var = environ[i];
		var_len = _strlen(var);
		env_cpy[i] = malloc(sizeof(char) * var_len + 1);
		if (env_cpy[i] == NULL)
		{
			err_msg(3);
			return (NULL);
		}
		_strncpy(env_cpy[i], environ[i]);
		i++;
	}
	return (env_cpy);
}
