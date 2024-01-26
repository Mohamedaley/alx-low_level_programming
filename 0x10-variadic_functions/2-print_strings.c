#include "variadic_functions.h"
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ptr;

	va_start(ptr, n)
	if (!n)
	{
	printf("\n");
	return;
	}
	while (i--)
	{
	printf("%s%s", va_arg(ptr, char) ? va_arg(ptr,char) : "nil", separator ? separator : "");
	}
	putchar ('\n');	
	va_end(ptr);
}
