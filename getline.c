#include "shell.h"
/**
 * custom_getline - reads line from file stream
 * @fs: File stream
 * @line: Pointer to the buffer where the line is stored
 * @length: Pointer to the size of the buffer
 * Return: Number of characters read (excluding newline), or -1 on failure
 */
ssize_t customised_getline(FILE *fs, char **line, size_t *length)
{
	ssize_t byteRead = getline(line, length, fs);

	if (bytesRead == -1)
	{
		free(*line);
		exit(EXIT_SUCCESS);
	}
	return bytesRead;
}
