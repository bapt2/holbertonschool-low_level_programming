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
printf("%d", a[i]);
if (i < (n - 1))
printf(", ");
i++;
}

printf("\n");
}
