#include "lists.h"
/**
 * listint_len - function to declear the length of linked list;
 * @h: the head of our list;
 * Return: the number of elements of the list;
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);
	while (h->next)
	{
		len++;
		h = h->next;
	}
	return (len);
}
