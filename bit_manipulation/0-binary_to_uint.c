#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: str
 * return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int y = 0;

	if (!b)
	{
		return(0);
	}
	while (b[y] == '0' || b[y] == '1')
	{
		x <<= 1;
		x += b[y] - '0';
		y++;
	}
	return (x);
}
