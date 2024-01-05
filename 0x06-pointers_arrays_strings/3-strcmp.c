#include "main.h"
/**
 * _strcmp - function to compare two strings;
 * @s1: first string;
 * @s2; second string;
 * Return: an integer identifies the result
 * 0 - > if the strings are equal
 * less than 1 if the first < second one;
 * more than 1 if the first > second one;
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0,j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (i == j)
		return (0);
	else if (i > j)
		return (1);
	else if (i < j)
		return (-1);
}
