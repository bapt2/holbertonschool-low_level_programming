#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup- function that returns a pointer to a newly allocated space in memory
 *@str: character
 *Return: NULL if str = NULL, to a pointer to the duplicate str on success
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0;
	int j;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	p = malloc(i + 1);
	for (j = 0; j < i; j++)
	{
	if (p == NULL)
	{
		return (NULL);
	}
		p[j] = str[j];
	}
	return (p);
}
