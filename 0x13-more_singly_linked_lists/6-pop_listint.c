#include "lists.h"
/**
 * pop_listint - A function to delete the head of a list
 * @head: the head pointer of the list
 * Return: the data stored in the first node;
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if ((*head) == NULL)
		return (0);
	data = (*head)->data;
	temp = (*head);
	temp = temp->next;
	free(*head);
	(*head) = temp;
	return (data);
}

