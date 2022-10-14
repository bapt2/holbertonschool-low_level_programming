#include "main.h"
/**
 *_memset -function that fills memory whith a constant byte
 *@dest: destination of the copy
 *@src: source of the copy
 *@n: unsigned int
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0; x = 0;

	while (x < n)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	return (dest);
}
