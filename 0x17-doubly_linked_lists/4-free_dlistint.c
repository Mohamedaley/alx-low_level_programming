#include "lists.h"
/**
 * free_dlistint - A function to free a list;
 * @head: the head pointer;
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	head = head->next;
	free(ptr);
	while(head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
	free(head);
	ptr = NULL;
}
