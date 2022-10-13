#include "main.h"
/**
 *reverse_array - function that reverse the content of an array of integer
 *@a:integer
 *@n:integer
 *Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, t = 0;

	for (i = n - 1; i > n / 2; i--)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
