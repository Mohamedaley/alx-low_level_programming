#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - function to print multiplication of two integers
 * @argc: the number of arguement passed
 * @argv: the values
 * Return: Success always (0);
 */
int main(int argc, char *argv[])
{
	int mul = 1, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv);
		}
		printf("%d", mul);
	}
	return (1);
}
