#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: pointer on pointer
 * @str: str
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newn, *tempn;
	char *news;
	size_t newl;

	newn = malloc(sizeof(list_t));
	if (!newn)
	{
		free(newn);
		return (NULL);
	}
	news = strdup(str);
	if (!news)
	{
		free(newn);
		return (NULL);
	}
	for (newl = 0; news[newl];)
		newl++;
	newn->str = news;
	newn->len = newl;
	newn->next = NULL;
	if (!*head)
	{
		*head = newn;
		return (newn);
	}
	else
	{
		tempn = *head;
		while (tempn->next)
			tempn = tempn->next;
		tempn->next = newn;
		return (tempn);
	}
	return (NULL);
}
