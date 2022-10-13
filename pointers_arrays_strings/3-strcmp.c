#include "main.h"
/**
 *_strcmp - function that compare two strings
 *@s1: first comparison
 *@s2:second comparison
 *Return: 0
 */
int _strmcp(char *s1, char *s2)
{
	int i, c = 0;

	if (*s1 == *s2)
	{
	for(i = 0; s2[i]; i++)
		{
			if (s1[i] == s2[i])
				c++;
		}
	if (c == i)
		return (1);
	}
	return (0);
}
