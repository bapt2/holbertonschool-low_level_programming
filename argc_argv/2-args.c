#include<stdio.h>
/**
 *main - program that print all argument it receives
 *@argc: integer
 *@argv: character
 *Return: 0
 */
int main(int argc, char *argv[])
{
int i = 0;

for (i = 0; i < argc; i++)
{
	printf("%s", argv[i]);
}
return (0);
}
