#include "main.h"
/**
 *print_alphabet_x10 - Retry point
 *
 *Return: always 0
 */
void print_alphabet_x10(void)
{
int x = 0;
char c;
for (x = 0; x < 10; x++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
