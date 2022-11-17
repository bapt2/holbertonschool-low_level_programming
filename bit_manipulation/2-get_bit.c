#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: size_t
 * @index: index
 * Return: the value of index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int p = 0;

	n = (p >> index) & 1;
	if (n != index)
		return (- 1);
	return (n);
}
