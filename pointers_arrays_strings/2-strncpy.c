#include "main.h"
/**
 *_strncpy - function that copies a string
 *@dest: second chain
 *@src: first chain
 *@n: integer
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		i++;
		dest[i] = src[i];
	}
		while (i < n)
		{
			i++;
		dest[i] = '\0';
		}
	return (dest);
}
