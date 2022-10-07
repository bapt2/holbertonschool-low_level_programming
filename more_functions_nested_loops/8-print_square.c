#include "main.h"
/**
 *print_square - function that print a square
 *
 *Return: always 0
 */
void print_square(int size)
{
int i = 0, j;
if (size <= 0)
{
_putchar('\n');
return;
}
while (i < size)
{
j = 0;
while (j < size)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
