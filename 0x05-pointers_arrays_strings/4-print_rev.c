#include "main.h"
/**
 * rev_string - Function to print the string in reverse;
 * @s: this is the string;
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int i = '\0', x;

	while (s[i] >= s[0])
	{
	--i;
	putchar(s[i]);
	}
}		