#include "shell.h"

/**
 * _strcmp - Compares two strings
 * @name: name
 * @var: Variable
 * @len: Length of the name.
 * Return: 1 if =, -1 if not =
 */

int _strcmp(char *name, char *var, unsigned int len)
{
	unsigned int v_len, j = 0;

	v_len = _strlen(var);
	if (v_len != len)
		return (-1);
	while (name[j] != '\0' && var[j] != '\0')
	{
		if (name[j] != var[j])
			return (1);
		j++;
	}
	return (0);
}

/**
 * _strncmp - Compares two strings
 * @name: Name
 * @var: Variable
 * @len: Length to compare up to.
 * Return: 1 if =, -1 if  not =
 */

int _strncmp(char *name, char *var, unsigned int len)
{
	unsigned int k = 0;

	while (k < len)
	{
		if (name[k] != var[k])
			return (-1);
		k++;
	}
	return (1);
}
