#include "main.h"
/**
 * print_rev - Function to print the string in reverse;
 * @s: this is the string;
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	int len = i - 1, j;

	for (j = len; j >= 0; j++)
	{
	_putchar(s[j]);
	}
}
