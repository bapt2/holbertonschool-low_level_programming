#include <stdio.h>
#include <stdlib.h>
/**
 *main - program that multiplies two number
 *@argc:integer
 *@argv:character
 *@c:integer
*Return: 1 if the program does not receive two argument
 */
int _isdigit(int c)
{
	if ((c >= 33 && c <= 47) && (c >= 58 && c <= 124))
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc != 3)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
		sum = sum + atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
