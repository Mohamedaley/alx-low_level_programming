#include "main.h"
/**
 * string_toupper - function to change lowercase to uppercase;
 * @s: string will be modified;
 *
 * Return: return a pointer to string;
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ( s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] -32;
		}
		return (s);
}
