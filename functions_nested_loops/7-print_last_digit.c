#include "main.h"
/**
 *print_last_digit - a function that print last digit of a number
 *@n: number's last digit value result
 * Return: value of print_last_digit
 */
int print_last_digit(int n)
{
int x = n % 10;
if (n < 0)
{
x = -1 * (n % 1);
}
else
{
x = n % 10;
}
_putchar(x + '0');
return (x);
}
