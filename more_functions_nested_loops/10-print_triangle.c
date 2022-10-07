#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: Alaways 0 (Success)
 */
void print_triangle(int size)
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
if (j <= size - 1)
_putchar(' ');
_putchar('\n');
i++;
}
}
