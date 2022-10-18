#include "main.h"
/**
 *_sqrt_recursion - function that returns the natural square root
 *@n: int
 *Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (_sqrt_recursion(n, 1/2) != (n, 1/2))
		return (-1);
}
