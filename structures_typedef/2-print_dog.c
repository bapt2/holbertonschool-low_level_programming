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
	else if (d->age == 0)
		printf("Age: (nil)");
	else if (d->owner == NULL)
		printf("Owner: (nil)");
	else if (d == NULL)
		printf(".");
}
