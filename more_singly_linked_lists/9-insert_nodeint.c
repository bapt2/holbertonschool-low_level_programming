#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head:head node
 * @idx: index
 * @n:new node
 *Return: NULL if it failed or the adress of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newn, *tempn;

	newn = malloc(sizeof(listint_t));
	if (!newn)
	{
		return (0);
	}
	newn->n = n;
	tempn = *head;
	if (n == 0)
	{
		newn->next = *head;
		*head = newn;
		return (*head);
	}
	else
	{
		tempn = *head;
		for (i = 0; i < (idx - 1); i++)
			tempn = tempn->next;
	}
	newn->next = tempn->next;
	tempn->next = newn;

	return (newn);
}
