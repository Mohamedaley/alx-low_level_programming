#include "lists.h"
/**
 * insert_dnodeint_at_index - A function ot insert node in specific index;
 * @idx: the passed index;
 * @h: the head pointer;
 * @n: the data passed;
 * Return: the address of new node , or NULL in Fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len = 0, index = 1;
	dlistint_t *new, *ptr = *h, *next;

	if (h == NULL)
	{
		new = malloc(sizeof(dlistint_t));
		new->next = NULL, new->prev = NULL;
		new->n = n;
	}
	while (ptr)
	{
		len++;
		ptr = ptr->next;
	}
	new = NULL, ptr = *h;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else if (idx > len)
		return (NULL);
	else if (idx == len)
		new = add_dnodeint_end(h, n);
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		while (index < idx)
		{
			ptr = ptr->next;
			index++;
		}
		next = ptr->prev, next->next = new, new->prev = next, new->next = ptr;
		new->n = n, ptr->prev = new;
	}
	return (new);
}
