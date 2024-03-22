#include "lists.h"
/**
 * get_dnodeint_at_index - A function to add a node in specific index;
 * @head: the head pointer;
 * @index: a number represeent the index of new node;
 * Return: the address of index node , NULL if Fail;
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	ptr = head;
	while (count < index)
	{
		ptr = ptr->next;
		count++;
	}
	return (ptr);
}
