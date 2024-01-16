#include <stdio.h>
#include "main.h"
/*
 * main - function to print the passed arguements
 * @argc: the number of arguement passed
 * @argv: the values
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
