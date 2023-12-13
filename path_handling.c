#include "main.h"

/**
 * find_executablefile - find executable file
 * @command: command
 * Return: Null
 */

char *find_executable_file(char *command)
{
	char *path_env = getenv("PATH");
	char *path = strtok(path_env, ":");

	while (path != NULL)
	{
		char full_path[MAX_INPUT_SIZE];

		snprintf(full_path, sizeof(full_path), "%s/%s", path, command);
		if (access(full_path, F_OK) == 0)
		{
			return (_strdup(full_path));
		}
		path = strtok(NULL, ":");
	}
	return (NULL);
}
