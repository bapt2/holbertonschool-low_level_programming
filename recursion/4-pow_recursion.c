#include "main.h"
/**
 *_pow_recursion - function that returns the value of x
 *@x
 *@y
 *Return: always 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (x == 0)
		return (0);
	return x * power(x, n - 1);
}
