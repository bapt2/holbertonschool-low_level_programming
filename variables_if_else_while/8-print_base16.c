#include <stdio.h>
/**
 *main- Main function
 *
 *Return: Exit status code
 */
int main(void)
{
char num;
for (num = 0 ; num < 10 ; num++)
{
putchar((num % 10) + '0');
}
for (num = 'a' ; num <= 'f' ; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
