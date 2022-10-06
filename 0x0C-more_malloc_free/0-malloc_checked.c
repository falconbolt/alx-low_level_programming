#include <stdlib.h>

/**
  * malloc_checked - Allocate memory using alloc. Exits with value 98 if malloc
  * fails.
  * @b: Amount of memory to allocate. Unsigned number.
  *
  * Return: A void pointer that points to the first byte of the allocated
  * memory.
  */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (!ptr)
		exit(98);

	return (ptr);
}
