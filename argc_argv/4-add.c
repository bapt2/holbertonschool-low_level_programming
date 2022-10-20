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
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
	{
		if (!isdigit(argv[i][j]))
		{
			printf("Error\n");
			return (1);
		}
	}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
