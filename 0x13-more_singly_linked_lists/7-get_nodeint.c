#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a list if it exist.
 * @head: listint_t pointer to the beginning of the list.
 * @index: unsigned int index of the node in the list to return.
 *
 * Return: The address of the nth node or NULL if it does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count;

	ptr = head;
	count = 0;

	while (ptr)
	{
		if (count == index)
			return (ptr);
		count++;
		ptr = ptr->next;
	}
	return (NULL);
}
