#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: str
 * Return: the number of nodes and [0] (nil) if str is NULL
 */
size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
