#include "main.h"
/**
 *_pow_recursion - function that returns the value of x
 *@x:int
 *@y:int
 *Return: always 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (x == 0)
		return (0);
	else
	return (x * _pow_recursion(x, y - 1));
}
