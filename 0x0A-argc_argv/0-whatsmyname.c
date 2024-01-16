#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - function to print command line arguement
 * @argc: number of command line arguements
 * @argv: the value
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv);
	}
	return (0);
}
