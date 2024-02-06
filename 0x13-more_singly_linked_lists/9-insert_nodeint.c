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
	unsigned int len = 0, i;
	listint_t *ptr, *temp, *linker;

	linker = *head;
	ptr = *head;
	while (ptr)
	{
		ptr = ptr->next;
		len++;
	}
	ptr = *head;
	if (idx > len)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	for (i = 0; i < idx; i++)
	{
		ptr = ptr->next;
	}
	while (linker != ptr)
	{
		linker = linker->next;
	}
	linker->next = temp;
	temp->next = ptr;
	return (temp);
}
