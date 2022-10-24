#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - function that creates an array of chars
 *@size:unsigned int
 *@c: character
 *Return: NULL if size = 0 and a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;
	
	p = malloc(sizeof(c) * size);
	if (size == 0)
		return (NULL);
	else if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
return (p);
}
