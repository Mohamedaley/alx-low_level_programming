#include "lists.h"
/**
 * add_nodeint - a function to add new element
 * @head: the head pointer
 * @n: the data passed to store
 * Return: the address of new element added;
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = NULL;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
