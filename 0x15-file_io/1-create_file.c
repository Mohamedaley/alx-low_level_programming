#include "main.h"
/**
 * create_file - A function to creat file
 * @filename: The name of the file
 * @text_content: a NULL terminated strint to be wrote in the file;
 * Return: 1 on Success 0 on Fail
 */
int create_file(const char *filename, char *text_content)
{
	void *buffer;
	ssize_t fd, wr;

	if (filename == NULL)
		return (-1);
	buffer = malloc(sizeof(text_content));
	if (text_content != NULL)
	{
	fd = open(filename, O_RDWR);
	wr = write(fd, buffer, sizeof(text_content) - 1);
	}
	close(fd);
	free(buffer);
	return (1);

}
