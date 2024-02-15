#include "main.h"
/**
 * _strlen - A function to determine the length of string;
 * @str: the string passed;
 * Return: the len of string passed
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len])
	{
		len++;
	}
	return (len);
}
