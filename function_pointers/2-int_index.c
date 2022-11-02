#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *int_index - function that searches for an integer
 *@array:array of the function
 *@size:number of the elements in the array
 *@cmp:pointer to the function
 *Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size == '\0' || cmp == NULL)
		return (-1);
	if (array != 0)
		for (i = 0; i <= size; i--)
		return (-1);
	return (size -1);
}
