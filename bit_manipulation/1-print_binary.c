#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: size_t
 * Return: void
*/
void print_binary(unsigned long int n)
{
	if (!n)
		return;
	for (n = 1 << 31; n > 0; n >>= 1)
		;
}
