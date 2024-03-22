#include "lists.h"
/**
 * print_dlistint - A function to print the elements of a list;
 * @h: pointer to list;
 * Return: the number of nodes;
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp = (dlistint_t *)h;
	size_t num = 0;

	if (!h)
		return (num);
	while (temp->prev != NULL)
		temp = temp->prev;
	while (temp)
	{
		printf("%d", temp->n);
		temp = temp->next;
		num++;
	}
	return (num);
}
