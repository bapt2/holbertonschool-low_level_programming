#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: head o the list
 * Return: 0 if the linked list is empty else the head node's data
*/
int pop_listint(listint_t **head)
{
	int tmp;
	listint_t *del;

	if (!*head)
	{
		return (0);
	}
	del = *head;
	tmp = del->n;
	*head = (*head)->next;
	free(del);
	return (tmp);

}
