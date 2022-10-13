#include "main.h"
/**
 *rev_string - function that reverse a string
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
for (t = c - 1; t >= c / 2; t--)
{
d = s[t];
s[t] = s[c - 1 - t];
s[c - t - 1] = d;
}
}
