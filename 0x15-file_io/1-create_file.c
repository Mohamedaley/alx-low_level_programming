#include "main.h"
/**
 * create_file - A function to creat file
 * @filename: The name of the file
 * @text_content: a NULL terminated strint to be wrote in the file;
 * Return: 1 on Success 0 on Fail
 */
int create_file(const char *filename, char *text_content)
{
	int len = 0;
	ssize_t fd, wr;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fd, text_content, len);

	if (wr == -1 || fd == -1)
		return (-1);

	close(fd);
	return (1);
}
