#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint
 * @head: is the head
 * @index:is the index of the node
 * Return: NULL if the node does'nt exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *get;

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
