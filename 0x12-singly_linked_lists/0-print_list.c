#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the beginning of the list.
 *
 * Return: The size of the list.
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr;
	int count;

	count = 0;
	ptr = h;

	if (!h)
		return (count);
	while (ptr)
	{
		if (ptr->str)
			printf("[%u] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		ptr = ptr->next;
		count++;
	}

	return (count);
}
