#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
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
printf("is positive");
}
else if (n == 0)
{
printf("is zero");
}
else if (n < 0)
{
printf("is negative");
}
return (0);
}
