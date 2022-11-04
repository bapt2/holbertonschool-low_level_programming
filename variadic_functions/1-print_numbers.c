#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_number - function that prints numbers, followed by a new line
 *@separator:character
 *@n: unsigned int
 *Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);
		for (i = 0; i < n; i++)
			printf("%d ;\n", n);
		if (separator == NULL)
		return;
		j += va_arg(args, int);
		va_end(args);
	return;
}
