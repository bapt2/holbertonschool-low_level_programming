#include "lists.h"

/**
 * free_dlistint -function that frees a dlistint
 * @h:head
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *fr;

	while (head)
	{
		fr = head;
		head = head->next;
		free(fr);
	}
	free(head);
}
