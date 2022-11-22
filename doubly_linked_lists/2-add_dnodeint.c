#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a dlist
 * @head: double pointer
 * @n: int
 * Return: new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newn;

	newn = malloc(sizeof(dlistint_t));
	if (!newn)
		return (NULL);
	newn->n = n;
	newn->prev = NULL;
	newn->next = *head;
	if ((*head) != NULL)
		(*head)->prev = newn;
	*head = newn;
	return (newn);
}
