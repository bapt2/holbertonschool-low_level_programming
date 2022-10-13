#include "main.h"
/**
 *_strcat - fonction that concatenates two strings
 *@dest: second chain
 *@src: first chain
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, t = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[t] != '\0')
	{
		dest[i] = src[t];
		i++;
		t++;
	}
	return (dest);
	_putchar('\n');
}
