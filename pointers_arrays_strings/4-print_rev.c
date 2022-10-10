#include "main.h"
#include <stdio.h>
/**
 *print_rev - function that prints a string in reverse
 *@s: character
 *Return: Always 0
 */
void print_rev(char *s)
{
while (*s)
_putchar(*s--);
_putchar('\n');
}
