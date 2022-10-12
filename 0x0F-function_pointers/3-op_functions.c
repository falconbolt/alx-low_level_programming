#include <stdio.h>
#include <stdlib.h>

/**
  * op_add - Adds two numbers.
  * @a: An integer number.
  * @b: An integer number.
  *
  * Return: The sum of the two numbers.
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Subtracts two numbers.
  * @a: An integer number.
  * @b: An integer number.
  *
  * Return: The difference of the two numbers.
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Multiplies two numbers.
  * @a: An integer number.
  * @b: An integer number.
  *
  * Return: The product of the two numbers.
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - Finds largest whole factor one number can go into another number.
  * @a: An integer number.
  * @b: An integer number.
  *
  * Return: The largest whole factor of b going into a.
  */

int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}
}

/**
  * op_mod - Finds the remainder left by the division of a and b.
  * @a: An integer number.
  * @b: An integer number.
  *
  * Return: The remainder.
  */

int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}
}
