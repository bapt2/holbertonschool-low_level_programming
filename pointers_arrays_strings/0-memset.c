#include "main.h"
/**
 *_memset -function that fills memory whith a constant byte
 *@s: char
 *@b: int
 *@n: unsigned int
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
		unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
