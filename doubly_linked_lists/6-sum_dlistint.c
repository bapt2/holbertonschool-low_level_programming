#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data of a dlistint
 * @head: head
 * Return:sum of all the data
*/
int sum_dlistint(dlistint_t *head)
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
