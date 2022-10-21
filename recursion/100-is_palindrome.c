#include "main.h"
/**
 *is_palindrome - function that returns 1 if a string is a palindrome
 *@s:
 *Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int i, c = 0, n = strlen(s);
	if (i < n/2)
	{
		if (s[i] == s[n - i - 1])
			c++;
		i++;
		is_palindrome(s);
	}
	else
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
}
