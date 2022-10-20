#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - program that multiplies two number
 *@argc:integer
 *@argv:character
*Return: 1 if the program does not receive two argument
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc != 3)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
	}
		sum = sum + atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
