#include "main.h"
/**
 *leet - function that encodes a string into 1337
 *@s: character
 *Return: r
 */
char *leet(char *s)
{
	char *r = s;
	int i = 0;

	char a[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {'4', '3', '0', '7', '1'};

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == a[i] || *s == a[i] - 32)
			{
				*s = n[i] + 0;
			}
		}
		s++;
	}
	return (r);
}
