#include "main.h"
#include <stdlib.h>
/**
 *array_range -function that create an array of integer
 *@min:integer
 *@max:integer
 *Return: NULL if min > max , NULL if malloc fail, to the pointer newly created
 */
int *array_range(int min, int max)
{
	int *p, i = 1;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * i);
		if (p == NULL)
			return (NULL);








	return (p);
}
