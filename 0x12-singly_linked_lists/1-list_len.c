#include "lists.h"
/**
 * list_len - a function to count the number of elements in a linked list;
 * @h: the head pointer of the linked list;
 * Return: the number of elements of lnk;
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	list_t *head = (list_t *)h;
	size_t len;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		head = head->next;
		count++;
	}
	len = count;
	return (len);
}
