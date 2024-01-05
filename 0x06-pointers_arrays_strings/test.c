#include <stdio.h>

int _strcmp(char *s1, char *s2)
{
        int i = 0, j = 0;

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

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}
