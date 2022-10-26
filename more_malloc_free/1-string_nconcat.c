#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - function that concatenates two strings.
 *@s1:character
 *@s2:character
 *@n:unsigned integer
 *Return: NULL if the function fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		s2 = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	ar = malloc((i + j + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		ar[k] = s1[k];
	for (k = 0; k < j; k++)
		ar[k + i] = s2[k];
	ar[i + j] = '\0';
	return (ar);
}
