#include "lists.h"
/**
 * delete_dnodeint_at_index - A function to delete node
 * @head: the head pointer
 * @index: the posistion
 * Return: 1 on Success -1 on Fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *ntemp = *head, *nextt = *head;
	unsigned int len = 0, idx = 1;
	
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		ntemp = ntemp->next;
		*head = ntemp;
		free(temp);
	}
	else
	{
		while (temp)
		{
			temp = temp->next;
			len++;
		}
		if (index > len)
			return (-1);
		temp = *head;
		while (idx < index)
		{
			temp = temp->next;
			idx++;
		}
		ntemp = temp->prev;
		nextt = temp->next;
		free(temp);
		ntemp->next = nextt;
		nextt->prev = ntemp;
	}
	return (1);
}
