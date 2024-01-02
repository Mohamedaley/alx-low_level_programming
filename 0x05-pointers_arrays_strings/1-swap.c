#include <stdio.h>
#include "main.h"
/**
 * swap_int - is made for swap values of two integers
 * @a: first number;
 * @b: second number;
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
