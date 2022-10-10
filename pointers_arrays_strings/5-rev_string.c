#include "main.h"
/**
 *print_rev - function that prints a string in reverse
 *@s: character
 *Return: Always 0
 */
void rev_string(char *s)
{
int c = 0;
int t;
char d;
while (s[c] != '\0')
c++;
for (t = c - 1; t >= 0; t--)
{
d = s[t];
s[t] = s[c -1 -t];
s[c - t - 1] = d
}
}
