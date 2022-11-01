#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_dog - function that frees dogs.
 *@p:
 *Return: 0
 */
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
