#include <stdarg.h>
#include <stdio.h>

/**
  * print_strings - Prints varying amount of strings passed, followed by a
  * new line.
  * @separator: String that will be printed in between strings.
  * @n: The number of strings passed after n.
  *
  * Return: Void.
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strs;
	char *temp;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		temp = va_arg(strs, char *);

		if (temp)
			printf("%s", temp);
		else
			printf("(nil)");

		if (separator && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(strs);
}
