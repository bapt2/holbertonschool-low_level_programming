#include "main.h"
#include <stdio.h>
/**
 *_puts - function that print a string followed by a new line
 *@str: character
 *Return: always 0
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}
