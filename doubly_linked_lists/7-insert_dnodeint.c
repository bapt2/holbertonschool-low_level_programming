#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position
 * @h: double pointer
 * @idx: index of the list
 * @n: int
 * Return: the adress of the new node or null if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *newn, *tmp;

	newn = malloc(sizeof(dlistint_t));
	tmp = *h;
	if (!newn)
		return (0);
	newn->n = n;
	if (!idx)
		return (add_dnodeint(h, n));
	tmp = *h;
	for (i = 0; i < (idx -1); i++)
	{
		if (!tmp)
			return (0);
		tmp = tmp->next;
	}
	if (tmp != NULL)
	{
		newn->next = tmp->next;
		newn->prev = tmp;
		if (newn->next != NULL)
			newn->next->prev = newn;
		tmp->next = newn;
	}
	return (newn);
}
