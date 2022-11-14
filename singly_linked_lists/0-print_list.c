#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: str
 * Return: the number of nodes and [0] (nil) if str is NULL
*/
size_t print_list(const list_t *h)
{

	if (!h)
		printf("[0] (nil)");
	return (h);
}
