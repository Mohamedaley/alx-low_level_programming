#include "lists.h"
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr)
	{
		ptr = ptr->next;
		sum += ptr->n;
	}
	return (sum);
}
