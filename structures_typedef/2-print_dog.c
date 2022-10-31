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
	if (d->name == NULL || d->age == 0 ||d->owner == NULL)
	{
		printf("Name: (nil)");
		printf("Age: (nil)");
		printf("Owner: (nil)");
	}
	else if (d == NULL)
		printf("NULL");
}
