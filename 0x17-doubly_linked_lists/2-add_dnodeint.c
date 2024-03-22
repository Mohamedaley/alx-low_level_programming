#include "lists.h"
/**
 * add_dnodeint - A function to add a node at the beg of double linked list;
 * @head: the head pointer;
 * @n: the data
 * Return: the address of new element or NULL in Fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *head;

	if (*head == NULL)
		return (NULL);
	if (temp == NULL)
		return (NULL);
	temp->next = NULL;
	temp->n = n;
	temp->prev = NULL;
	temp->next = ptr;
	ptr->prev = temp;
	*head = temp;
	return (temp);
}
