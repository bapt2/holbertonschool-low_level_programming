#include "function_pointers.h"
#include <stdlib.h>
/**
 *array_iterator -function that executes a function given as a parameter
 *on each element of an array
 *@array:the array
 *@size:size of the array
 *@action:pointer to the function
 *Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || size == '\0' || action == NULL)
		return;
	action(array[5]);
}
