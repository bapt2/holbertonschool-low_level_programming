#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - program that multiplies two number
 *@argc:integer
 *@argv:character
 *Return: 1 if the program does not reeceive two argument
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	char *operation;
	int num1, num2;

	operation = argv[1];
	num1 = atoi(argv[2]);
	num2 = atoi(argv[3]);

	if (strcmp(operation, "add") == 0)
	{
		printf("%d\n", num1 + num2);
	}
	return (1);
}
