#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list_t list.
 * @h: str
 * Return: the number of nodes and [0] (nil) if str is NULL
 */
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		if (!h->n)
			printf("[0] (nil)\n");
		else
			printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
