#include "lists.h"
/**
 * sum_dlistint - A function to sum all data in list;
 * @head: the head pointer
 * Return: the summation of all data of (0) in Fail;
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
