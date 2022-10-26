#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - function that allocates memory using malloc
 *@b: integer
 *Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int  *p;
	unsigned int i;

	p = malloc(sizeof(b) * i);
	for (b = 0; b < i; b++)
	{
		p[b] = i;
	}
	return (p);
}
