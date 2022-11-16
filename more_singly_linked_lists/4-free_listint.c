#include "lists.h"
/**
 * free_listint - function that free a list
 * @head: str
 * Return: free list
 */
void free_listint(listint_t *head)
{
	listint_t *tempn;

	while (head)
	{
		tempn = head;
		head = head->next;
		free(tempn);
	}
	free(head);
}
