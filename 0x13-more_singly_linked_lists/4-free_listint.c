#include "lists.h"
/**
 * free_listint - a function to free a linked list
 * @head: the head pointer 
 * Return: nothing;
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp)
	{
	temp = temp->next;
	free(head);
	head = temp;
	}
}
