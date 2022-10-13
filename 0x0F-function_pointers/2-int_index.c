/**
  * int_index - Searches for an integer.
  * @array: Pointer to an array of type int.
  * @size: Size of the array.
  * @cmp: Pointer to the function that will compare numbers.
  *
  * Return: Returns the index at which the number is found. -1 if the number
  * was not found.
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
