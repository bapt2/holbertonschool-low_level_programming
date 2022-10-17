#include "main.h"
/**
 *_print_rev_recursion - function that print a string in a reverse
 *@s: string to be print
 *Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
			}
	else
		_putchar('\n');
}
