#include "shell.h"

/**
 * _strlen - length of string
 * @s: string to be counted
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
