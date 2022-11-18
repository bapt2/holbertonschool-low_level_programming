#include "main.h"

/**
 * flip_bits -function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n:
 * @m:
 * Return:
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t count = 0, o;
	for (o = n ^ m; o != 0; o = o >> 1)
		count += o & 1;;
	return (count);
}
