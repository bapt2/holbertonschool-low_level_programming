#include "lists.h"

/**
 * beforthefunction - function that print before the main function is executed
 * Return: result
*/
void beforethefunction (void) __attribute__ ((constructor));
void beforethefunction (void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
