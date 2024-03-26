#include <stdio.h>

/**
 * _isupper - is my own fucntion that :checks for uppercase character
 * * @c: this the character which we want to check
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
