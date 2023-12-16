#include "shell.h"

/**
 * _strncpy - copy string
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

char *_strncpy(char *dest, char *src)
{
	int i;
	int j = _strlen(src);

	for (i = 0; i <= j; i++)
		dest[i] = src[i];
	return (dest);
}
