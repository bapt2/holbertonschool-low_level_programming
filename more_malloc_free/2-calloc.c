#include <stdlib.h>
#include "main.h"
/**
 *_calloc - function that allocates memory for an array
 *@nmemb:unsigned int
 *@size:unsigned int
 *Return: If nmemb or size is 0, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < (size * nmemb); i++)
			p[i] = 0;
	return (p);
}
