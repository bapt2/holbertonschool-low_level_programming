#include "lists.h"
/**
 * free_list - function that free a list
 * @head: str
 * Return: free list
*/
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head->str);
		free(head->len);
		free(head);
	}
}
