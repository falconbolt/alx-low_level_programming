#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * main - Performs calculations of two numbers depending on what the user
  * enters.
  * @argc: The number of arguments entered.
  * @argv: Pointer to pointers that contain the arguments entered.
  *
  * Return: 0 upon successful run.
  */

int main(int argc, char **argv)
{
	char *op;
	int num1;
	int num2;
	int result;
	int (*f)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = &argv[2][0];
	num2 = atoi(argv[3]);

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	if (*op != '+' && *op != '-' && *op != '*' && *op != '/' && *op != '%')
	{
		printf("Error\n");
		exit(99);
	}

	f = get_op_func(op);
	result = f(num1, num2);
	printf("%d\n", result);

	return (0);
}
