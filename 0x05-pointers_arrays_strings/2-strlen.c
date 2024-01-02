#include "main.h"
/**
 * _strlen - function giving the length of string;
 * @s: string address;
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
