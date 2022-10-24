#include "lists.h"

/**
 * free_listint2 - Frees the memory occupied by a list. Sets head to NULL
 * afterwards.
 * @head: Pointer to a pointer to the beginning of the list.
 *
 * Return: Void.
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (!head)
		return;
	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	head = NULL;
}
