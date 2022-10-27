#include <stdio.h>
/**
 *main - program that print its name
 *@argc: integer
 *@argv: character
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
