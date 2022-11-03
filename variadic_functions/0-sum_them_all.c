#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 *sum_them_all - function that returns the sum of all its parameters.
 *@n: integer
 *Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)

	va_end(args);
	return (i);
}
