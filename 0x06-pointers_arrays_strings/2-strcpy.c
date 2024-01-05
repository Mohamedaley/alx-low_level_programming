#include "main.h"
/**
 * _strncpy - function to copy a string;
 * @dest: the first string;
 * @src: the second string;
 * @n: the number of letter we want to copy;
 *
 * Return: function returns a pointer to the string;
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j, x = 0, y = 0;

	while (src[i] != 0 && i <= n)
	{
		i++;
	}
	for (j = 1; j <= i; j++)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	x++;
	dest[x] = '\0';
}
