#include "lists.h"
/**
 * print_dlistint - A function to print the elements of a list;
 * @h: the head pointer
 * Return: the number of nodes;
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp = (dlistint_t *)h;
	size_t num = 0;

	while (temp->next != NULL)
	{
		printf("%d", temp->n);
		temp = temp->next;
		num++;
	}
	return (num);
}
