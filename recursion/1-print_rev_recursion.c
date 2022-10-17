#include "main.h"
/**
 *_print_rev_recursion - function that print a string in a reverse
 *@s: character
 *Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar("%c", *s);
	}
}
int main(void)
{
	_putchar('\n', _print_rev_recursion, n);
	return (0);
}
