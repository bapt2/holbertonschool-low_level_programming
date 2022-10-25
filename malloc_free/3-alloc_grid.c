#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - function that returns a pointer to a 2 dimensional array
 *@width:integer
 *@height:integer
 *Return: NULL on failure, if width or height is 0 or negative return NULL
 */
int **alloc_grid(int width, int height)
{
	int **p, i;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(height * sizeof(int*));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		{
			p[i] = malloc(width * sizeof(int));
		}
		return (p);
		for (i = 0; i < height; i++)
		{
			free(p[i]);
		}
		free(p);
}
