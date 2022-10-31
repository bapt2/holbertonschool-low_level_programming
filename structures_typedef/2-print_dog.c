#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_dog - function that prints a struct dog
 *@d: struct dog
 *Return: 0
 */
void print_dog(struct dog *d)
{

	if (d->name == NULL)
	printf("Name: (nil)");
	if (d->age == 0)
	printf("Age: (nil)");
	if (d->owner == NULL)
	printf("Owner: (nil)");

	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	if (d == NULL)
		return;
}
