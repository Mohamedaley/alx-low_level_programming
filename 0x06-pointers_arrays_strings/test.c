#include "main.h"
#include <stdio.h>
/**
 * _strncat - a modified function to concatenate two strings
 * @dest: represents the first string
 * @src: represents the second string
 * @n: represents the number of letters which we want to concatenate;
 * Return: function is designed to return a pointer to the destination/string;
 */
char *_strncat(char *dest, char *src, int n)
{
        int i = 0, j;

        while (dest[i] != '\0')
        {
                i++;
        }
        for (j = 1; j <= n; j++)
        {
		i++;
        dest[i] = src[j];
        }
	i++;
        dest[i] = '\0';
	return (dest);
}
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
