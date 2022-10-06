#include <stdlib.h>

/**
  * _calloc - Allocates memory for an array using malloc and then sets the
  * memory to zero.
  * @nmemb: Number of elements to allocate for the array.
  * @size: Size in bytes of each element.
  *
  * Return: A void pointer to the first byte of the allocated memory, or NULL.
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i;
	int bytes;

	bytes = nmemb * size;

	if (bytes <= 0)
		return (NULL);

	ptr = malloc(bytes);

	if (!ptr)
		return (NULL);

	for (i = 0; i < bytes; i++)
		ptr[i] = '\0';

	return ((void *) ptr);
}
