#include "sort.h"

/**
 * bubble_sort - Bubble sorts an array of integers of size `size` in ascending
 * order.
 *
 * @array: Pointer to an integer array.
 * @size: size_t variable representing the size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	char sorted = 0;
	int temp;
	size_t idx;

	if (array == NULL || size == 0 || size == 1)
		return;

	while (sorted == 0)
	{
		for (idx = 0; idx < size - 1; idx++)
		{
			if (array[idx] > array[idx + 1])
			{
				temp = array[idx];
				array[idx] = array[idx + 1];
				array[idx + 1] = temp;
				print_array(array, size);
				sorted = -1;
			}
		}

		if (sorted == -1)
			sorted = 0;
		else
			sorted = 1;
	}
}
