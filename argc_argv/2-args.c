#include<stdio.h>
/**
 *main - program that print all argument it receives
 *@argc: integer
 *@argv: character
 *Return: 0
 */
int main(int args,char *argv[])
{
int i=0;

for(i=0;i<args;i++)
{
	printf("%s",argv[i]);
}
return 0;
}
