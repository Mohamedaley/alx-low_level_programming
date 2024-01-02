#include "main.h"
/**
 * _strlen - function giving the length of string;
 * @s: string address;
 *
 * Return: the (x) is the number of letters of the string s;
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
	x++;
	}
	return (x);
}
