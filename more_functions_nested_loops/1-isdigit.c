#include "main.h"
/**
 *_isdigit - function that check for a digit
 *@c: parameter of the function
 *Return: 1 if c is a digit and 0 otherwhise
 */
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
return (1);
else
return (0);
}
