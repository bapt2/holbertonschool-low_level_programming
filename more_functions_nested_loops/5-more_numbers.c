#include "main.h"
/**
 *more_numbers - function that print numbers 10 times the numbers
 *
 *Return: always 0
 */
void more_numbers(void)
{
int n;
int x;
for (x = 0; x < 10; x++)
{
for (n = 0 ; n < 14 ; n++)
{
if (n > 9)
{
_putchar((n / 10) + '0');
}
_putchar((n % 10) + '0');
}
_putchar('\n');
}
}
