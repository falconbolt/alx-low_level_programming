/**
  * array_iterator - Executes a function passed as an argument on each element
  * of an array.
  * @array: Pointer to an integer array.
  * @size: Size of the array.
  * @action: Pointer to the function that takes in an int.
  */

void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	if (array && action && size)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
