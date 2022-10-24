#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list and return the n value
 * contained within.
 * @head: Pointer to a pointer to the beginning of the list.
 *
 * Return: The n value contained within the deleted head node, or 0 if the list
 * is empty.
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr;

	n = 0;

	if (head && *head)
	{
		ptr = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = ptr;
	}

	return (n);
}
