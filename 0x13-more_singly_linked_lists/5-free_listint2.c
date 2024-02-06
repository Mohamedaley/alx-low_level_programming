#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, ptr;

	if (head == NULL)
		return;
	ptr = (*head);

	while (*head)
	{
		temp = ptr;
		free(temp);
		ptr = ptr->next;
	}
	*head = NULL;
}
