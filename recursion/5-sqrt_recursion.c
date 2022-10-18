#include "main.h"
/**
 *_sqrt - function that return square
 *@x:parameter
 *@y:parameter
 *Return: int
 */
int _sqrt(int x, int y)
{
	if (x * x == y)
		return (x);
	else if (x * x > y)
		return (-1);
	return (_sqrt(x + 1, y));
}

/**
 *_sqrt_recursion - function that returns the natural square root
 *@n: int
 *Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt(1, n));
}
