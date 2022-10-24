#include "lists.h"

/**
 * listint_len - Returns the number of elements in the list.
 * @h: const listint_t pointer to the beginning of the list.
 *
 * Return: The size of the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count;
	const listint_t *ptr;

	count = 0;
	ptr = h;
	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
