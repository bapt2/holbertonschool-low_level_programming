#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a listint.
 * @head: pointer on pointer
 * @n: int
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newn;

	newn = malloc(listint_t);
	if (!newn)
	{
		return (NULL);
	}
	newn->n = n;
	newn->next = *head;
	*head = newn;
	return (newn);
}
