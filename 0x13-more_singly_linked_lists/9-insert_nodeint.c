#include "lists.h"
/**
 * insert_nodeint_at_index - A function to insert nodes at specific position;
 * @head: the head pointer;
 * @idx:the index of the list where the new node should be added,starts at 0
 * @n: the data to be stored in the created node;
 * Return: the address of the new node of NULL if it failed;
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int len, i;
	listint_t *ptr, *temp, *linker;

	linker = *head;
	ptr = *head;
	temp = malloc(sizeof(listint_t));
	temp->next = NULL;
	temp->n = n;
	if (!(*head))
		return (NULL);
	if (!idx)
	{
		ptr->next = temp;
		return (temp);
	}
	while (ptr)
	{
		ptr = ptr->next;
		len++;
	}
	if (idx > len)
	{
		free(temp);
		return(NULL);
	}
	ptr = *head;
	for (i = 0; i < idx; i++)
		ptr = ptr->next;
	for (i = 0; i < (idx - 1); i++)
		linker = linker->next;
	linker->next = temp;
	temp->next = ptr;
	return (temp);
}
