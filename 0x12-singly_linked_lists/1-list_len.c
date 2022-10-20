#include "lists.h"

/**
 * list_len - Counts the number of elements/nodes in a list.
 * @h: The pointer to the beginning of the list.
 *
 * Return: The number of elements/nodes in the list.
 */

size_t list_len(const list_t *h)
{
	const list_t *ptr;
	int count;

	ptr = h;
	count = 0;

	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}

	return (count);
}
