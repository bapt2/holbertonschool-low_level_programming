#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint
 * @head: head node
 * @index:index node
 * Return:null if the node doesn't exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *get;

	if (!head)
		return (0);
	get = head;
	while (count < index && get != NULL)
	{
		get = get->next;
		count++;
	}
	return (get);
}
