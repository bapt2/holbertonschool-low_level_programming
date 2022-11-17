#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes a specifique node of a list
 * @head: head o the list
 * @index
 * Return: 0 if the linked list is empty else the head node's data
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *del, *tempn;

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
		if (!tempn || !tempn->next)
			return (-1);
		tempn = tempn->next;
	}
	del->next = tempn->next;
	tempn->next = del;
	free(tempn);
	return (1);
}
