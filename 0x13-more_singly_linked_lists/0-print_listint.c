#include "lists.h"
/**
 * print_listint - a function to print all elements of list
 * @h: the head pointer
 * Return: the nubler of elements;
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		len++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}

