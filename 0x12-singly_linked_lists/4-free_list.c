#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the list.
 *
 * Return: Void.
 */

void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	current = head;

	if (!head)
		return;

	while (current)
	{
		next = current->next;
		if (current->str)
			free(current->str);
		free(current);
		current = next;
	}
}
