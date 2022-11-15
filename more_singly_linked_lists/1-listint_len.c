#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer on struct
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		if (!h->n)
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (i);
}
