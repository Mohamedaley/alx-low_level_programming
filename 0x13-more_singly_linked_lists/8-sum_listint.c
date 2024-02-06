#include "lists.h"
/**
 * sum_listint - A function to sum the numbers stored in linked list;
 * @head: the head pointer
 * Return: the summation of these numbers;
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (head == NULL)
		return (0);
	ptr = head;
	if (head->next == NULL)
	{
		sum += head->n;
	}
	while (ptr->next)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
