#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: double pointer
 * @n: int
 * Return:
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newn;

	newn = malloc(sizeof(dlistint_t));
	if (!newn)
		return (0);
	newn->n = n;
	newn->next = *head;
	*head = newn;
	return (newn);
}
