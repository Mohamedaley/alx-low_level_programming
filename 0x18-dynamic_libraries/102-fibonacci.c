#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Success);
 */
int main(void)
{
	int s = 0;
	int i = 0, j = 1, n = 0;

	printf("%d, %d,", i, j);
	while (n < 48)
	{
		s = i + j;
		printf("%d,", s);
		i = j;
		j = s;
		n++;
	}
	return (0);
}
