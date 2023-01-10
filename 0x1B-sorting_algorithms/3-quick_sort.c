#include "sort.h"

void quick_sort_main(int *array, size_t lo, size_t hi, size_t size);
size_t partition(int *array, size_t lo, size_t hi, size_t size);

/**
 * quick_sort - Performs quick sort on an array of integers in ascending order.
 *
 * @array: Pointer to an integer array.
 * @size: size_t variable representing the size of an array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	quick_sort_main(array, 0, size - 1, size);
}

/**
 * quick_sort_main - A recursive function that partitions the array and sorts
 * the subarrays.
 *
 * @array: Pointer to an integer array.
 * @lo: Starting index of the subarray.
 * @hi: Ending index of the subarray.
 * @size: size_t variable representing the size of an array.
 */
void quick_sort_main(int *array, size_t lo, size_t hi, size_t size)
{
	size_t p;

	if (lo < hi)
	{
		p = partition(array, lo, hi, size);
		if (p > 0)
			quick_sort_main(array, lo, p - 1, size);
		quick_sort_main(array, p + 1, hi, size);
	}
}

/**
 * partition - Sorts the subarray arround the pivot.
 *
 * @array: Pointer to an integer array.
 * @lo: Starting index of the subarray.
 * @hi: Ending index of the subarray.
 * @size: size_t variable representing the size of an array.
 *
 * Return: The middle index that will split the array in half.
 */
size_t partition(int *array, size_t lo, size_t hi, size_t size)
{
	int pivot, temp;
	size_t idx, jdx;

	idx = lo;
	pivot = array[hi];
	for (jdx = lo; jdx < hi; jdx++)
	{
		if (array[jdx] < pivot)
		{
			if (idx != jdx && array[idx] != array[jdx])
			{
				temp = array[idx];
				array[idx] = array[jdx];
				array[jdx] = temp;
				print_array(array, size);
			}
			idx++;
		}
	}
	if (idx != jdx && array[idx] != array[jdx])
	{
		temp = array[idx];
		array[idx] = array[jdx];
		array[jdx] = temp;
		print_array(array, size);
	}

	return (idx);
}
