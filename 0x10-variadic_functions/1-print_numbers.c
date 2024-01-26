#include "variadic_functions.h"
/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ptr;

	va_start(ptr, n);
	if (!n)
	{
	printf("\n");
	return;
	}
	while (i--)
	{
	printf("%d%s", va_arg(ptr, int), i ? (separator ? separator : "") : "\n");
	}
	va_end(ptr);
}
