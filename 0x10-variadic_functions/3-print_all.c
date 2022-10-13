#include <stdio.h>
#include "variadic_functions.h"

void _print_char(va_list args);
void _print_int(va_list args);
void _print_float(va_list args);
void _print_string(va_list args);

/**
  * _print_char - Prints a character.
  * @args: A va_list.
  *
  * Return: Void.
  */

void _print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
  * _print_int - Prints an integer.
  * @args: A va_list.
  *
  * Return: Void.
  */

void _print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
  * _print_float - Prints a float.
  * @args: A va_list.
  *
  * Return: Void.
  */

void _print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
  * _print_string - Prints a string.
  * @args: A va_list.
  *
  * Return: Void.
  */

void _print_string(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (!s)
		s = "(nil)";
	printf("%s", s);
}

/**
  * print_all - Prints all agruments passed after the first one. ', ' will be
  * printed in between the arguments.
  * @format: String containing format of the argument to be printed.
  *
  * Return: Void.
  */

void print_all(const char * const format, ...)
{
	va_list args;
	char *separator;
	int i;
	int j;
	fo_t valid[] = {
		{"c", _print_char},
		{"i", _print_int},
		{"f", _print_float},
		{"s", _print_string},
		{NULL, NULL}
	};

	va_start(args, format);
	separator = "";
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (valid[j].fo)
		{
			if (format[i] == *(valid[j].fo))
			{
				printf("%s", separator);
				valid[j].f(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);

	printf("\n");
}
