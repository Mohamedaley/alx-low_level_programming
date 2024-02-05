#include "lists.h"
/**
 * add_nodeint - a function to add new element
 * @head: the head pointer
 * @n: the data passed to store
 * Return: the address of new element added;
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = NULL;

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	temp->next = *head;
	*head = temp;
	return (temp);
}
