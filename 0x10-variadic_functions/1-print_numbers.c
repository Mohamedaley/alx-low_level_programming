#include "variadic_functions.h"
/*
 * print_numbers - function to print all arguments passed
 * @n: the number of parameters;
 * Return: nothing;
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ptr;

	va_start(ptr, n);
	if (!n)
	{
	printf("\n");
	}
	while (i--)
	{
	printf("%d%s", va_arg(ptr, int), i ? (separator : separator) : "\n");
	}
	va_end(ptr)
}
