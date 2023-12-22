#include <stdio.h>
/**
 * print_numbers - prints the numbers, from 0 to 9,
 * followed by a new line
 */
void print_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar(i);
		_putchar(\n);
	}
}

