#include "3-calc.h"
/**
 *get_op_func
 *@s:
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
	if (s == NULL)
	{
		printf("Error\n");
		exit (99);
	}

	result = get_op_func(s)(num1, num2);


	printf("%d\n", result);
	return (0);
}
