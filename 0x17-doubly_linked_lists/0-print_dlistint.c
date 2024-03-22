#include "lists.h"
/**
 * print_dlistint - A function to print the elements of a list;
 * @h: the last node;
 * Return: the number of nodes;
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp = (dlistint_t *)h;
	size_t num = 0;

	if (!h)
		return (num);
	while (temp->prev != NULL)
	{
		printf("%d", temp->n);
		temp = temp->prev;
		num++;
	}
	return (num);
}
