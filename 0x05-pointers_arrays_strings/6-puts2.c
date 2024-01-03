#include "main.h"
/**
 * puts2 - prints the every character of the string
 * @str: stores the string
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int i, j;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = i; j >= 0; j--)
	{
	_putchar(str[j]);
	_putchar('\n');
	}
}
