#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer on struct
 * Return: 0
*/
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (i);
}
