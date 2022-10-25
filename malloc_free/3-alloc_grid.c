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
	int i, j;
	int **ar;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = (int **)malloc(height * sizeof(int *));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] = (int *)malloc(width * sizeof(int));

		if (ar[i] == NULL)
		{
			for (j = 0; j < height; j++)
				free(ar[j]);
			free(ar);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
