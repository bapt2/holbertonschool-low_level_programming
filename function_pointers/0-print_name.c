#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - function that prints a name
 *@name: the name of the function
 *@f: pointer to a function
 *Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
