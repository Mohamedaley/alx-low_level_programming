#include "lists.h"
/**
 * dlistint_len - A function to return the number of nodes in the list;
 * @h: the head ponter;
 * Return: the number of nodes in the list;
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp = (dlistint_t *)h;
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (temp->prev != NULL)
	{
		temp = temp->prev;
	}
	while (temp!= NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}