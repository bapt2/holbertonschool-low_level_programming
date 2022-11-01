#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_dog - function that frees dogs.
 *@d: dog_t
 *Return: 0
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->owner);
	free(d->name);
	free(d);
	}
}
