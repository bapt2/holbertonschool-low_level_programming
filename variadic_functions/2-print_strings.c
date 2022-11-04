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
		s = va_arg(args, char*)
	{
		printf("%s", va_arg(args, char*));
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != '\0' && j != n - 1)
		{
			printf("%s", separator);
		}
	}
	}
	printf("\n");
	va_end(args);
}
