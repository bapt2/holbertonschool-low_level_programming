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
	dlistint_t *del, *tmp;

	tmp = *head;
	if (!tmp)
		return (-1);
	if (!index)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	tmp = *head;
	for (i = 0; i < (index - 1); i++)
	{
		if (!tmp)
			return (-1);
		tmp = tmp->next;
	}
	del = *head;
	if (tmp !=NULL)
	{
		del->next = tmp->next;
		del->prev = tmp;
		if(del->next != NULL)
			del->next->prev = tmp->next;
	}
	free(tmp);
	return (1);
}
