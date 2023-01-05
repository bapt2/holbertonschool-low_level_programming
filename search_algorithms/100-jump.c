#include "search_algos.h"

/**
 * jump_search - function that searches for a value
 * in a sorted array of integers using the Jump search algorithm
 * @array:pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: return the first index where value is located
*/

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), x, jump;

	if (!value)
		return (-1);
	for (x = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		x = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", x, jump);


	jump = jump < size - 1;
	for (;x < jump && array[x] < value; x++)
		printf("Value checked array [%ld] = [%d]\n", x, array[x]);
	printf("Value checked array [%ld] = [%d]\n", x, array[x]);
	return (array[x]);
}
