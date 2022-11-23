#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head:double pointer
 * @index:index node that should be deleted
 * Return:1 if it succeeded or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *del, *tempn;

	del = *head;
	if (!del)
	{
		return (-1);
	}
	tempn = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(del);
		return (1);
	}
	tempn = *head;
	for (i = 0; i < (index - 1); i++)
	{
		if (!del->next)
			return (-1);
		del = del->next;
	}
	tempn = del->next;
	del->next = tempn->next;
	del->prev = tempn->prev;
	free(tempn);
	return (1);
}
