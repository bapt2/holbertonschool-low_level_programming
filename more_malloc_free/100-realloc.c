#include "main.h"
#include <stdlib.h>
/**
 *_realloc - function that reallocates a memory block using malloc and free
 *@ptr:void
 *@old_size:unsigned int
 *@new_size:unsigned int
 *Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	ptr = malloc(old_size * new_size);
	if (ptr == NULL)
		return (NULL);



	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
		return (NULL);
	free(ptr);
	return (ptr);
}
