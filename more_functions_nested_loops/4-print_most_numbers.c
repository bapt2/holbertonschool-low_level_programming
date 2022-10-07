#include "main.h"
/**
 *print_most_numbers - function that print numbers from 0 to 9 without 2 and 4
 *
 *Return: always 0
 */
void print_most_numbers(void)
{
char num;
for (num = '0' ; num <= '9' ; num++)
{
if (num != '2' && num != '4')
_putchar(num);
}
_putchar('\n');
}
