#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Main function
*
* Return: Exit status code
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive ");
}
else if (n == 0)
{
printf("%d is zero ");
}
else (n < 0)
{
printf("%d is negative ");
}
return (0);
}
