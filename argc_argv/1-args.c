#include <stdio.h>
/**
 *main - program that print the number of argument passed into it
 *@argc: integer
 *@argv: character
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	printf("%d\n", argc);
	while (i < argc )
	{
	printf("%s", argv[i]);
	}
	printf('\n');
	return (0);
}
