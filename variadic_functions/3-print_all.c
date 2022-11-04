#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 *print_char - print char
 *@a: a
 *Return:
*/
void print_char(va_list x)
{
	printf("%c", va_arg(x, int));
		}
/**
 *print_int - print int
 *@x: x
 *Return: 0
 */
void print_int(va_list x)
{
	printf("%d", va_arg(x, int));
		}
/**
 *print_float - print float
 *@x: x
 *Return: 0
 */
void print_float(va_list x)
{
	printf("%f", va_arg(x, double));
		}
/**
 *print_string - print string
 *@x: x
 *Return: 0
 */
void print_string(va_list x)
{

	char *u;

	u = va_arg(x, char *);
	if (u == NULL)
		printf("(nil)");
	printf("%s", u);
		}

/**
 *print_all - function that print anything
 *@format: list of types of arguments passed to the function
 *Return: 0
 */
void print_all(const char * const format, ...)
{
	uni_t unit_e[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL , NULL}
	};
	int k = 0;
	int l = 0;
	va_list args;
	char *d = "";

	va_start(args, format);
	while (format && format[k] != '\0')
	{
		while (unit_e[l].op)
		{
			if (*unit_e[l].op == format[k])
			{
				printf("%s", d);
				unit_e[l].f(args);
				d = ", ";
			}
			l++;
		}
		l = 0;
		k++;
	}
	printf("\n");
	va_end(args);
}
