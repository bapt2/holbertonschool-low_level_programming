#include "main.h"

/**
 * flip_bits -function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: n
 * @m: m
 * Return: count
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t count = 0;
	size_t o = n ^ m;

	for (; o != 0; o = o >> 1)
		count += o & 1;
	return (count);
}
