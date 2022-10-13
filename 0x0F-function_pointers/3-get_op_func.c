#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
  * get_op_func - Selects the correct function to perform the operation asked
  * by user.
  * @s: The operation to perform.
  *
  * Return: The result of the operation done on the two numbers.
  */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (*(ops[i].op))
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
