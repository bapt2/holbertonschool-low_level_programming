#include "main.h"
/**
 *_strncat - fonction that concatenates two strings
 *@dest: second chain
 *@src: first chain
 *@n: integer
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, t = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (t < n && src[t] != '\0')
	{
		dest[i] = src[t];
		i++;
		t++;
	}
	return (dest);
	_putchar('\n');
}
