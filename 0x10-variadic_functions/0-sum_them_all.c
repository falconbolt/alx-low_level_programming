#include <stdarg.h>

/**
  * sum_them_all - Returns the sum of all its paramters.
  * @n: The number of parameters that will be in the valist.
  *
  * Return: The sum of all the parameters after the first parameter. 0 if the
  * first parameter is 0.
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list nums;

	sum = 0;

	if (n != 0)
	{
		va_start(nums, n);

		for (i = 0; i < n; i++)
			sum += va_arg(nums, int);

		va_end(nums);
	}

	return (sum);
}
