#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a', j = 'z';
	char I = 'A', J = 'Z';

	while (i <= j)
	{
		putchar(i);
		i++;
	}
	while (I <= J)
	{
		putchar(I);
		I++;
	}
	putchar('\n');
	return (0);
}
