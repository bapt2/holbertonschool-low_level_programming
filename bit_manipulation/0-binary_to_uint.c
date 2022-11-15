#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: str
 * Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		x <<= 1;
		if (*b == '1')
		x ^= 1;
		b++;
	}
	return (x);
}
