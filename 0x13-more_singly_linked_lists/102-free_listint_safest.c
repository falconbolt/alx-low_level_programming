#include "lists.h"
void remove_loop(listint_t *h, listint_t *loop_node);
/**
 * free_listint_safe - Frees a list_t list. The safest version, however it is
 * not compliant with the task's requirement of 'go through the list only once'
 * , hence it is not submitted under the official task file name. The loop must
 * be destroyed before any freeing can be done.
 * @h: Pointer to a pointer to the beginning of the list.
 *
 * Return: Size of the freed list.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *slow;
	listint_t *fast;
	listint_t *next;
	size_t count;

	count = 0;
	slow = *h;
	fast = *h;
	if (!h)
		return (count);
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			remove_loop(*h, slow);
	}

	while (*h)
	{
		next = (*h)->next;
		count++;
		free(*h);
		*h = next;
	}
	*h = NULL;
	return (count);
}
/**
 * remove_loop - Removes the link causing the loop.
 * @head: The head of the list.
 * @loop_node: One of the nodes within the loop.
 *
 * Return: Void.
 */

void remove_loop(listint_t *head, listint_t *loop_node)
{
	listint_t *node1;
	listint_t *node2;

	node1 = head;
	while (1)
	{
		node2 = loop_node;
		/* loop until back to start or the head is found */
		while (node2->next != loop_node && node2->next != node1)
			node2 = node2->next;
		/* if node2 is the tail and node1 is the head of the loop */
		if (node2->next == node1)
			break;
		/* advance node1 if it is not on the head of the loop */
		node1 = node1->next;
	}

	node2->next = NULL;
}
