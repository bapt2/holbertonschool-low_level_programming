#include "lists.h"
/**
 * free_listint2 - function that free a list
 * @head: str
 * Return: free list
 */
void free_listint2(listint_t **head)
{
	listint_t *tempn;

	if (!head)
		return;

	while (*head)
	{
		tempn = *head;
		*head = (*head)->next;
		free(tempn);
	}
}
