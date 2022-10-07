#include "main.h"
/**
 *print_numbers - function that print the numbers, from 0 to 9
 *
 *Return: always 0
 */
void print_numbers(void)
{
char num;
for (num = '0' ; num < '9' ; num++)
{
_putchar(num);
}
 _putchar('\n');
return (0);
}
