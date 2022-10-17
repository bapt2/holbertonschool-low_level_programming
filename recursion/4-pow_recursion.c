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
	if (x == 0)
		return (0);
	return (x * _pow_recursion(x, y - 1));
}
