#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - function that prints numbers, followed by a new line
 *@separator:character
 *@n: unsigned int
 *Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int j;
	va_list args;

	va_start(args, n);
	for (j = 0; j < n; j++)

	{
		printf("%s", s = va_arg(args, char*));
		if (separator != NULL && j != n - 1)
		{
			printf("%s", separator);
		}
		if (s[j] == '\0' || n == '\0')
		{
			printf("%s (nil)", separator);
		}
	}
	printf("\n");
	va_end(args);
}
