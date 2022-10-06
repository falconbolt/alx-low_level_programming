#include <stdlib.h>

/**
  * _realloc - Reallocates a memory block using malloc and free.
  * @ptr: A void pointer to the old memory block.
  * @old_size: Size of the old memory block.
  * @new_size: Size of the new memory block.
  *
  * Return: A void pointer to the new memory block, or old memory block if new
  * size and old size were the same. NULL if malloc fails or new size if 0.
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	char *old;
	int max_copy;
	int i;

	old = ptr;

	if (ptr)
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	else
	{
		new = malloc(new_size);
		if (new)
			return ((void *) new);
		else
			return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size)
		max_copy = old_size;
	else
		max_copy = new_size;

	new = malloc(new_size);
	if (!new)
		return (NULL);

	for (i = 0; i < max_copy; i++)
		new[i] = old[i];
	free(old);
	return ((void *) new);
}
