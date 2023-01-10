#include "sort.h"

/**
 * shell_sort - Performs shell sort on an array of integers in ascending order.
 * The Knuth sequence will be used for determining the gap.
 *
 * @array: Pointer to an integer array.
 * @size: size_t variable representing the size of an array.
 */
void shell_sort(int *array, size_t size)
{
	size_t gap;
	unsigned int i, j;
	int temp;


	if (array == NULL || size <= 1)
		return;

	gap = 1;
	for (i = 0; gap < size; i++)
		gap = (gap * 3) + 1;
	gap = (gap - 1) / 3;

	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
				array[j] = array[j - gap];
			array[j] = temp;
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
