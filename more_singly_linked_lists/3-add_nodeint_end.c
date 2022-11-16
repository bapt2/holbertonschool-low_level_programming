#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a listint.
 * @head: pointer on pointer
 * @n: int
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newn, *tempn;

	newn = malloc(sizeof(listint_t));
	if (!newn)
	{
		return (NULL);
	}
	newn->n = n;
	newn->next = NULL;
	if (!*head)
	{
		*head = newn;
		return (newn);
	}
	else
	{
		tempn = *head;
		while (tempn->next)
			tempn = tempn->next;
		tempn->next = newn;
		return (tempn);
	}
	return (NULL);
}
