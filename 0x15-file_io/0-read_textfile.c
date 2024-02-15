#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a content of a file and print it to STDOUT;
 * @filename: The name of the file
 * @letters: The number of letters should be printed by the function;
 * Return: 0 when filename == NULL || fail
 * the number of printed bytes ->SUCCESS;
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, re, wr;
	void *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	re = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, re);

	if (fd == -1 || re == -1 || wr == -1 || wr != re)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (wr);
}
