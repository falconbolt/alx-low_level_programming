#include "lists.h"

/**
 * add_nodeint - Adds a new node to the beginning of the list.
 * @head: Pointer to a pointer to the beginning of the list.
 * @n: const int value that will be placed in the new node.
 *
 * Return: Address of the new node or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
