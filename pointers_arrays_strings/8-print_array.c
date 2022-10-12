#include "main.h"
#include <stdio.h>
/**
 *print_array - function that print n element of an array of integer
 *@a: character
 *@n: character
 *Return: Always 0
 */
void print_array(int *a, int n)
{
	int i = 0;
	while (i < n)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
		i++;
	}
	_putchar('\n');
}
