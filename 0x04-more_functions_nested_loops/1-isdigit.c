#include <stdio.h>
/**
 *_isdigit - checks for a digit from 0 to 9
 *@c: is a parameter for the value which we want to check
 *Return: 1 if c is digit , 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
