#include <stdio.h>
#include "main.h"
/**
 * _puts - Function was made to print string on the screen (Standard output);
 * @str: is the string which we receive;
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] < '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
