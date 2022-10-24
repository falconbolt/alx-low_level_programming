#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: listint_t pointer to the beginning of the list.
 *
 * Return: Address of the node where the loop starts, or NULL if there is no
 * loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow;
	listint_t *fast;

	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
