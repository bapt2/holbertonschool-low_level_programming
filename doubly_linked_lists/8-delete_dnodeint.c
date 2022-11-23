#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head:double pointer
 * @index:index node that should be deleted
 * Return:1 if it succeeded or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tempn = *head;

	if (!tempn)
		return (-1);
	for (; index != 0; index--)
	{
		if (!tempn)
			return (-1);
		tempn = tempn->next;
	}
	if (tempn == *head)
	{
		*head = tempn->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		tempn->prev->next = tempn->next;
		if (tempn->next != 0)
			tempn->next->prev = tempn->next;
	}
	free(tempn);
	return (1);
}
