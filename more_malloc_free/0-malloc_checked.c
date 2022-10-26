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

	p = malloc(sizeof(i) * b);
	return (p);
}
