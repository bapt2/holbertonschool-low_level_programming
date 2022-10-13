#include "main.c"
/**
 *reverse_array - function that reverse the content of an array of integer
 *@a:integer
 *@n:integer
 *Return: 0
 */
void reverse_array(int *a, int n);
{
	int i, t, x
		t = 0;
	t = n - 1;
	while (t < x)
	{
		i = a[t];
		a[t] = a[x];
		a[x] = i;
		t++;
		x--;
	}
}
