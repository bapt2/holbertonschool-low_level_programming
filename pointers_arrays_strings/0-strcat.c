#include "main.h"
/**
 *_strcat - fonction that concatenates two strings
 *@dest: second chain
 *@src: first chain
 *Return: always 0
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int i = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while(src[i] != '\0')
	{
		dest[x] = src[i];
		x++;
		i++;
	}
	return (dest);
}
