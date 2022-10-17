#include "main.h"
/**
 *_strlen_recursion - function that returns the lenght of a string
 *@s: string
 *Return: always 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_strlen_recursion(s + 1);
        }
}
