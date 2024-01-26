#include "variadic_functions.h"
/*
 * sum_them_all - a function to sum all of the parameter passed
 * @n: the number of our paratmeters;
 * Return: the summation;
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = 0;

	if (n == 0)
		exit(0);
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
