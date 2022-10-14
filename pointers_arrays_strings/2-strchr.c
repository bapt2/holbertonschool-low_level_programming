#include "main.h"
/**
 *_strchr - function that locates a string
 *@s:character
 *@c:character
 *Return: Null if the character is not found or pointer of first occurrence of char c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
