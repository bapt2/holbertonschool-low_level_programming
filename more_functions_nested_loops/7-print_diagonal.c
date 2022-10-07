#include "main.h"
/**
 *print_diagonal - function that drow a diagonal on the terminal
 *@n: int
 *Return: Always 0
 */
void print_diagonal(int n)
{
while (n > 0)
{
_putchar('\\');
--n;
}
_putchar('\n');
}
