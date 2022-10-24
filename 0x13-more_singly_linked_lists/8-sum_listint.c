#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list
 * .
 * @head: listint_t pointer to the beginning of the list.
 *
 * Return: The sum of all the data (n) or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr;

	sum = 0;
	ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
