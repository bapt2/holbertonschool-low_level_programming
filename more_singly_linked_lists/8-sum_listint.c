#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a listint
 * @head: head
 * Return: sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
