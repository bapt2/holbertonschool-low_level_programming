#include "main.h"
/**
 *_print_rev_recursion - function that print a string in a reverse
 *
 *Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	int i;

	if (*s)
	{
		_print_rev_recursion(s + 1, i);
		_putchar(*s, i);
	}
	return (fp);
}
int main(void)
{
	_putchar('\n', _print_rev_recursion, n);
	return (0);
}
