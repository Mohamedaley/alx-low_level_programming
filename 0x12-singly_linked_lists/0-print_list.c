#include "lists.h"
/**
 * print_list - function to print sinlgle linked list
 * @h: the pointer passed
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	size_t len = 0;
	list_t *head = (list_t *)h;;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		if (head->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", head->len, head->str);
		}
		head = head->next;
		count++;
	}
	len = count;
	return (len);
}
