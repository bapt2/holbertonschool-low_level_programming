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
	int *p, i, l;

	if (min > max)
		return (NULL);
	l = min - max + 1;
	p = malloc(l * sizeof(int));
		if (p == NULL)
			return (NULL);
		for (i = 0; i < l; min++)
		{
			p[i] = min;
				i++;
}
		return (p);
}
