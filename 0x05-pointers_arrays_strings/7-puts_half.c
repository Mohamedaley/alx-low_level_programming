#include "main.h"
/**
 * puts_half - Function made to print the second half of a string;
 * @str: this is the string stored in char pointer
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int len, i, n;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2 == 1)
	{
		for (n = (len - 1) / 2; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
}
