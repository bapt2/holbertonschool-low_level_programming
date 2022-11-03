#include "3-calc.h"
/**
 *op_add - add a and b
 *@a:first number to be add
 *@b:second number to be add
 *Return: result
 */
int op_add(int a, int b)
{
	return(a + b);
}
/**
 *op_sub - sub a and b
 *@a:first number to be substract
 *@b:second number to be substract
 *Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - mul a and b
 *@a:first number to be multiplied
 *@b:second number to be multiplied
 *Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  *op_div - div a and b
  *@a:first number to be divided
  *@b:second number to be divided
  *Return: result
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 *op_mod - mod a and b
 *@a:first number to be moduled
 *@b:second number to be moduled
 *Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
