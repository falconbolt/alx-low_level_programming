#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints the elements of a list.
 * @h: A const listint_t pointer to the beginning of the list.
 *
 * Return: size of the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count;
	const listint_t *ptr;

	ptr = h;
	count = 0;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}

	return (count);
}
