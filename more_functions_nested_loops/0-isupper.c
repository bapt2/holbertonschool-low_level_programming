#include "main.h"
/**
 *_isupper - function that checks for uppercase character
 *@c: parameter of the function
 *Return: return 1 if c is a uppercase, return 0 otherwhise
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
