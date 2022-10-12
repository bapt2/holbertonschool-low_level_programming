#include "main.h"
/**
 *puts2 - function that print every other character of a string
 *@str: character
 *Return: Always 0
 */
void puts2(char *str)
{
	int c = 0;
	int t;
	while (str[c] != '\0')
	{
		c++;
	}
		for (t = 0; t < c; t += 2)
	{
		_putchar(str[t]);
	}
	_putchar('\n');
}
