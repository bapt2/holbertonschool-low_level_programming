#include "main.h"
/**
 *_strlen_recursion - function that returns the lenght of a string
 *@s: string
 *Return: always 0
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(*s);
		_strlen_recursion(s + 1);
	}
	return (i);
}
