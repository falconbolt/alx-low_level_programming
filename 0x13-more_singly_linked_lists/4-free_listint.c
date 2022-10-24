#include "lists.h"

/**
 * free_listint - Frees the memory occupied by a list.
 * @head: Pointer to the beginning of the list.
 *
 * Return: Void.
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
