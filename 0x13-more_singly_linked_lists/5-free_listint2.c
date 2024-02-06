#include "lists.h"
/**
 * free_listint2 - A function to free a list and sets the *head to NULL
 * @head: the head pointer of our list;
 * Return: VOID (nothing)
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (*head == NULL)
		return;
	while (temp)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
