#include <stdio.h>
/**
 * main - Entry point
 * Description: prints numbers 
 * Return: Alaways 0 (Success)
 */
int main(void)
{
int x;
for (x = 1; x <= 100 ; x++)
{
if (x % 3 == 0 && x % 5 == 0)
printf("FizzBuzz");
else if (x % 5 == 0)
printf("Buzz");
else if (x % 3 == 0)
printf("Fizz");
else
printf("%d", x);
if (x !=100)
printf(" ");
}
return (0 * putchar(10));
}
