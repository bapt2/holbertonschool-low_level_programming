#include "main.h"
/**
 *print_diagsums - function that print the sum of two diagonal
 *of a square matrix of integer
 *@a:
 *@size:
 *Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int rx = 0;
	int ry = 0;

	for ( ; i < size; i++)
	{
		rx += a[(size + 1) * i];
		ry += a[(size - 1) * (i + 1)];
	}
	_putchar("%d, %d\n", rx, ry);
}
