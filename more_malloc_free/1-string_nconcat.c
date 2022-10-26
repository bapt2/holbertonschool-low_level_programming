#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - function that concatenates two strings.
 *@s1:character
 *@s2:character
 *@n:unsigned integer
 *Return:
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	p = malloc(sizeof(s1) + sizeof(s2) - 4);
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (p == NULL)
			return (NULL);
		p[i] = s1[i];
	}
	for (n = 0; s2[n] != '\0'; n++)
	{
		if (p == NULL)
			return (NULL);
		p[i] = s2[n];
		i++;
	}
	return (p);
}
