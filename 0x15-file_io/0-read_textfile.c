#include <main.h>
/**
 * read_textfile - A function to read sequential access file
 * @filename: the name of the file
 * @letters: the number of letters to be read;
 * Return: the actual number of letters it could read and print;
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	void *buffer;
	int fd, rd, wr;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, letters);

	if (fd < 0 || read < 0 || wr < 0 || wr != rd)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (wr);
}
