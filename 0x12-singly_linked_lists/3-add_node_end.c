#include "lists.h"
#include <string.h>

unsigned int _strlen(const char *str);

/**
 * _strlen - Returns the length of the string.
 * @str: The pointer to the string.
 *
 * Return: The length of the string.
 */

unsigned int _strlen(const char *str)
{
	unsigned int len;

	len = 0;

	if (str)
	{
		while (str[len])
			len++;
	}

	return (len);
}

/**
 * add_node_end - Add a node to the end of the list.
 * @head: Pointer to the pointer of the beginning of the list.
 * @str: Pointer to the string the new node will contain.
 *
 * Return: Pointer to the new node in the list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *ptr;

	ptr = *head;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	if (str)
	{
		new_node->str = strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = _strlen(str);
	}
	else
	{
		new_node->str = NULL;
		new_node->len = 0;
	}
	new_node->next = NULL;

	if (*head)
	{
		while (ptr->next)
			ptr = ptr->next;

		ptr->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	return (new_node);
}
