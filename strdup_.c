#inlcude "main.h"

/**
 * _strdup - copies to newly allocated space
 * @s: string to copy new memory to
 * Return: pointer to new memory
 */

char *_strdup(char *s)
{
	int k;
	char *c;
	int count = 0;

	if (s == NULL)
		return (NULL);

	for (k = 0; s[k] != '\0'; k++)
		count++;

	c = malloc(sizeof(char) * count + 1);

	if (c == NULL)
		return (NULL);
	for (k = 0; s[k] != '\0'; k++)
		c[k] = s[k];
	return (c);
}
