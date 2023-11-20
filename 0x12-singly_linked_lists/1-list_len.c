#include "lists.h"

/**
 * list_len - Return the num of elements in a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t node_count = 0;

	while (current != NULL)
	{
		if (current->str != NULL)
			current = current->next;
		node_count++;
	}
	return (node_count);
}
