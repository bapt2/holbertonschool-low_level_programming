#include "3-calc.h"
/**
 *main -calculate
 *@argc: integer
 *@argv:character
 *Return: result
 */
int main(int argc, char *argv[])
{
	int result;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *s = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	if (get_op_func(s) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit (99);
	}

	result = get_op_func(s)(num1, num2);


	printf("%d\n", result);
	return (0);
}
