#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';
	char j = 'z'

	while (i != 'e' && i != 'q' && i <= j)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
