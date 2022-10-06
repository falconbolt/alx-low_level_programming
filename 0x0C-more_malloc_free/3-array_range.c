#include <stdlib.h>

/**
  * array_range - Creates an array of integers. Numbers range from lowest to
  * highest. Starting with min and up to and including max.
  * @min: Lowest number.
  * @max: Highest number.
  *
  * Return: Pointer to the first byte of the array of integers, or NULL.
  */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	i = 0;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * (max - min + 1));

	if (!ptr)
		return (NULL);

	do {
		ptr[i] = min;
		min++;
		i++;
	} while (min <= max);

	return (ptr);
}
