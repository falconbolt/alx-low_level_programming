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
 * add_node - Adds a node to the beginning of a list.
 * @head: Pointer to the head of the list.
 * @str: The string to store in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	if (str)
	{

		new_node->len = _strlen(str);
		new_node->str = strdup(str);
	}
	else
	{
		new_node->len = 0;
		new_node->str = NULL;
	}
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
