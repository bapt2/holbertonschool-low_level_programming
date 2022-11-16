#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a list_t list.
 * @head: pointer on pointer
 * @n: int
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newn;

	newn = malloc(sizeof(listint_t));
	if (!newn)
	{
		free(newn);
		return (NULL);
	}
	for (;n < newn->n;)
	newn->next = newn;
	*head = newn;
	return (newn);
}
