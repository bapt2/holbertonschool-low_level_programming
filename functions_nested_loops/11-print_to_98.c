#include "main.h"
#include <stdio.h>
/**
*print_to_98 - function that prints all natural number from n to 89
*@n: parameter of the function
*Return: 0
*/
void print_to_98(int n)
{
if (n <= 98)
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
else
{
while (n > 89)
printf("%d, ", n--);
printf("%d\n", n);
}
}
