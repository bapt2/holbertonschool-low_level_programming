#include "main.h"
/**
 *puts_half - function that prints half of a string
 *@str: character
 *Return: Always 0
 */
void puts_half(char *str)
{
int c = 0;
int t;

while (*(str + c))
{
c++;
}
t = c / 2;
if (c % 2)
t += 1;
while (t < c)
{
_putchar(*(str + t));
t++;
}
_putchar('\n');
}
