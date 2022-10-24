#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a lintint_t linked list. The safest version
 * that works no matter how the heap grows, however it is not compliant with
 * task 12's 'go through the list only once' requirement, hence why it is not
 * submitted under the official file name for the task.
 * @head: const listint_t pointer to the beginning of the list.
 *
 * Return: the size of the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	unsigned int count;
	unsigned int i;
	const listint_t *behind;
	const listint_t *ptr;

	count = 0;
	ptr = head;
	if (!head)
		return (count);
	while (ptr)
	{
		printf("[%p] %d\n", (void *) ptr, ptr->n);
		count++;
		ptr = ptr->next;
		behind = head;
		for (i = 0; i < count; i++)
		{
			if (behind == ptr)
			{
				printf("-> [%p] %d\n", (void *) behind, behind->n);
				return (count);
			}
			behind = behind->next;
		}
	}
	return (count);
}
