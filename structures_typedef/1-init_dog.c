#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *init_dog - function that initialize a variable of type struct dog
 *@d: pointer
 *@name: Poppy
 *@age:3.5
 *@owner:Bob
 *Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
