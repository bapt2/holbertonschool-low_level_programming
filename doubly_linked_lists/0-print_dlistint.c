#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: the head node
 * Return: the number of node
*/
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		if (!h->n)
			printf("0\n");
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
