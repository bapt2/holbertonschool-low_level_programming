#include "lists.h"
/**
 * free_list - function that free a list
 * @head: str
 * Return: free list
*/
void free_list(list_t *head)
{
	list_t *tempn;

	while (head)
	{
		tempn = head;
		head = head->next;
		free(tempn->str);
		free(tempn);
	}
	free(head);
}
