#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
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
		if (separator != NULL)
		{
			printf("%s", separator);
		}
		if (va_arg(ptr, char*))
		{
			printf("%s", va_arg(ptr, char*));
		}
		else
			printf("nil");
	}
	putchar ('\n');
	va_end(ptr);
}
