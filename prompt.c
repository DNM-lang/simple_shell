#include "shell.h"

/**
 * pliz_interact - whether shell is in interactive mode
 * @fs: File stream
 * @buffer: Buffer
 */
void pliz_interact(int fs, struct stat buffer)
{
	fstat(fs, &buffer);
	if (S_ISCHR(buffer.st_mode))
		_puts(PROMPT);
}

/**
 * _puts -  function to print the shell prompt
 * @s: String to print
 */

void _puts(char *s)
{
	unsigned int len = _strlen(s);

	write(STDOUT_FILENO, s, len);
}
