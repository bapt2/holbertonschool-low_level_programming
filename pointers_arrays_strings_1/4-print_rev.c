#include "main.h"
/**
 *print_rev - function that prints a string in reverse
 *@s: character
 *Return: Always 0
 */
void print_rev(char *s)
{
int c = 0;
int t;
while (s[c] != '\0')
c++;
for (t = c - 1; t >= 0; t--)
{
_putchar(s[t]);
}
_putchar('\n');
}
