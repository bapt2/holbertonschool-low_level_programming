#include <stdio.h>
#include <stdlib.h>
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
			printf("Error\n");
			exit(1);
		}
	    for (i = 0; i < argc - 1; i++)
		    sum = sum + atoi(argv[i]);
		printf("%d\n", sum);
		return (0);
		}
