#include "main.h"
/**
 *_strcmp - function that compare two strings
 *@s1: first comparison
 *@s2:second comparison
 *Return: 0
 */
int _strmcp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
