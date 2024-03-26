#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @r: the int to check
 * Return: the absolute value of int
 */
int _abs(int r)
{
	if(r < 0)
	{
	return (-1 * r);
	}
	else if (r==0)
	{
	return (0);
	}
	else
	{
	return (r);
	}
	
}
