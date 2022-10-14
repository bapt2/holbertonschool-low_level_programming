#include "main.h"
/**
 *_strstr - function that locate a substring
 *@haystack:
 *@needle:
 *Return: a pointer to the beginning of the located substring
 *or null if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

		if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
