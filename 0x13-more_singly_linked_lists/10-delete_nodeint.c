#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_it linked
 * list.
 * @head: Pointer to a pointer to the beginning of the list.
 * @index: Index of the node to delete if it exists.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous;
	listint_t *current;
	unsigned int current_ind;

	if (!head)
		return (-1);
	current = *head;
	current_ind = 0;

	if (index == 0)
	{
		if (*head)
		{
			*head = (*head)->next;
			free(current);
			return (1);
		}
		else
		{
			return (-1);
		}
	}

	while (current)
	{
		if (current_ind == index)
		{
			previous->next = current->next;
			free(current);
			return (1);
		}
		else
		{
			current_ind++;
			previous = current;
			current = current->next;
		}
	}
	return (-1);
}
