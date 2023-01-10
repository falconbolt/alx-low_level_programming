#include "sort.h"

/**
 * selection_sort - Perform selection sort on an array of integers in ascending
 * order.
 *
 * @array: Pointer to an integer array.
 * @size: size_t variable representing the size of the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t idx, jdx, min_idx;
	int temp;

	if (array == NULL || size <= 1)
		return;

	for (idx = 0; idx < size - 1; idx++)
	{
		min_idx = idx;
		for (jdx = idx + 1; jdx < size; jdx++)
		{
			if (array[min_idx] > array[jdx])
				min_idx = jdx;
		}
		if (min_idx != idx)
		{
			temp = array[idx];
			array[idx] = array[min_idx];
			array[min_idx] = temp;
			print_array(array, size);
		}
	}
}
