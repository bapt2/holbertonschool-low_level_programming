#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - function that prints numbers, followed by a new line
 *@separator:character
 *@n: unsigned int
 *Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list args;

	va_start(args, n);
		for (j = 0; j < n; j++)
		{
			if (separator != NULL && j != n - 1)
			{
				printf("%d", va_arg(args, int));
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(args);
}
