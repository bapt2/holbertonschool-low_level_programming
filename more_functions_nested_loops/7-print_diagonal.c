#include "main.h"
/**
 *print_diagonal - function that drow a diagonal on the terminal
 *@n: int
 *Return: Always 0
 */
void print_diagonal(int n)
{
int a = 0;
int b = 0;
if (n > 0)
{
while (a < n)
{
while (b < a)
{
_putchar(' ');
b++;
}
a++;
b = 0;
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
