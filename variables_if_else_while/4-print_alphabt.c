#include <stdio.h>
/**
 *main- Main function
 *
 *Return: Exit status code
 */
int main(void)
{
char letter;
for (letter = 'a' ; letter <= 'z' ; letter++)
{
if (letter != 'e' && letter != 'q')
putchar(letter);
}
putchar('\n');
return (0);
}
