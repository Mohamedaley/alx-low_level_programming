#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i = 0, j;

	while (i < 24)
	{
	j = 0;
	while (j < 60)
	{
		_putchar('0' + i / 10);
		_putchar('0' + i % 10);
		_putchar(':');
		_putchar('0' + j / 10);
		_putchar('0' + j % 10);
		_putchar('\n');
		j++;
	}
	i++;
	}
}
