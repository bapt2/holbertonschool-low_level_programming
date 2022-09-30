#include <stdio.h>

/**
 * main - Main function
 *
 * Return: Exit status code
 */

int main(void)
{
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu byte\n", sizeof(char));
printf("Size of long int: %zu bytes\n", sizeof(long int));
    printf("Size of long long int: %zu bytes\n", sizeof(long long int));
return 0;
}
