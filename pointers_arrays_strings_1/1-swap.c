#include "main.h"
/**
 *swap_int - function that swap the values of two integers
 *@a: first integer to swap
 *@b: second integer to swap
 *Return: always 0
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
