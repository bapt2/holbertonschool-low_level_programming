#include <stdio.h>
/**
 *main - program that print the number of argument passed into it
 *@argc: integer
 *@argv: character
 *Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
