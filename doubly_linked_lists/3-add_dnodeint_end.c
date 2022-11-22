#include "lists.h"

/**
 * add_dnodeint_end -  function that adds a new node at the end of a dlist
 * @head: double pointer
 * @n: int
 * Return:the new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newn, *tmp;

	newn = malloc(sizeof(dlistint_t));
	if (!newn)
		return (0);
	newn->n = n;
	newn->next = NULL;
	if (!*head)
	{
		*head = newn;
		return (newn);
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = newn;
		return (tmp);
	}
	if ((*head) != NULL)
		(*head)->next = newn;
	*head = newn;
	return (NULL);
}
