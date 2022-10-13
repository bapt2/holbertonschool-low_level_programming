#include "main.h"
/**
 *_strcat - fonction that concatenates two strings
 *@dest: second chain
 *@src: first chain
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len_dest = 0, len_src = 0;

	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}

	while (src[len_src] != '\0')
	{
		dest[len_dest] = src[len_src];
		len_dest++;
		len_src++;
	}
	return (dest);
}
