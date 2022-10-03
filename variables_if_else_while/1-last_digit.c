#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main- Main function
*
*Return: Exit status code
*/
int main(void)
{
int n; LastDigit

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("%d and is greater than 5\n", n);
scanf("%d", &n);
}
else if (n == 0)
{
printf("%d and is 0\n", n;)
scanf("%d", &n);
}
else if (n < 6)
{
printf("%d and is less than 6 and not 0\n", n);
scanf("%d", &n);
}
return (0);
}
