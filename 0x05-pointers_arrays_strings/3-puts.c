#include <stdio.h>
#include "main.h"
/**
 * _puts - Function was made to print string on the screen (Standard output);
 * @str: is the string which we receive;
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i = 0;

	for (str[i] = 0; str[i] < '\0'; i++)
	{
		putchar(str[i]);
	}
}
