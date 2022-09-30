#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void) {
int 6;
float 5;
double 4;
char 3;
long int 2;
long long int 1;

    printf("Size of int: %zu bytes\n", sizeof(6));
    printf("Size of float: %zu bytes\n", sizeof(5));
    printf("Size of double: %zu bytes\n", sizeof(4));
    printf("Size of char: %zu byte\n", sizeof(3));
printf("Size of long int: %zu bytes\n", sizeof(2));
    printf("Size of long long int: %zu bytes\n", sizeof(1));

return 0;
}
