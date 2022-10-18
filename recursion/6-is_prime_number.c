#include "main.h"
/**
 *_prime - function that return if a number is prime
 *@x: parameter
 *@n: parameter
 *Return: int
 */
int _prime(int x, int y)
{
	if (x <= 1 || x % y == 0)
		return (0);
	else if (x == y)
		return (1);
	else if (x > y)
	{
		_prime(x, y + 1);
	}
	return (1);
}
/**
 *is_prime_number- function that return 1 if the input int is prime number
 *@n: parameter of the function
 *Return:1 if the input the int is a prime number otherwhise return 0
 */

int is_prime_number(int n)
{
	return (_prime(n, 2));

}
