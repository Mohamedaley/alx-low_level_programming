#include "main.h"
/**
 * main - A funcion to copy text to new file
 * @argc: the number of arguments
 * @argv: the argument passed
 * Return: differnt values;
 */
int main(int argc, char *argv[])
{
	void *buffer;
	ssize_t fd, wr, re;
	char *fto, *from;
	int in;

	from = argv[1];
	fto = argv[2];
	buffer = malloc(1024);

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}
	fd = open(from, O_RDONLY);
	re = read(fd, buffer, 1024);
	if (fd == -1 || re == -1)
	{
		dprintf(2, "Error: Can't read from file %s", from);
		exit(98);
	}
	close(fd);
	fd = open(fto, O_RDWR | O_CREAT | O_TRUNC, 0664);
	wr = dprintf(fd, buffer);
	if (fd == -1 || wr == -1)
	{
		dprintf(2, "Error: Can't write to %s", fto);
		exit(99);
	}
	in = close(fd);
	if (in == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
