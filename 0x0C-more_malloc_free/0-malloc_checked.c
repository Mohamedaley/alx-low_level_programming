#include <stdio.h>
/**
 * malloc_checked - function was made to allocate memory for an array;
 * @b size of the arary
 * Return: pointer to the allocated memory;
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc (b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
