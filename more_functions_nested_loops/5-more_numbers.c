#include "main.h"
/**
 *more_numbers - function that print numbers 10 times the numbers
 *
 *Return: always 0
 */
void more_numbers(void)
{
int x = 0;
char num;
for (x = 0; x < 10; x++)
{
for (num = '0' ; num <= "14" ; num++)
{
_putchar(num);
}
_putchar('\n');
}
}
