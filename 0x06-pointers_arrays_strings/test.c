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
        int i = 0, j = 0;

        while (dest[i] != '\0')
        {
                i++;
        }
        for (j = 0; j <= n; j++)
        {
        dest[i] = src[j];
        i++;
        }
        dest[i] = '\0';
}
