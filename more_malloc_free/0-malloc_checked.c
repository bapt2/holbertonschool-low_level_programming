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

	p = malloc(b);
	return (p);
}
