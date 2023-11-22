#include "lists.h"

/**
 * print_listint_len - Return the number of elements in a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t node_count = 0;

	while (current != NULL)
	{
		current = current->next;
		node_count++;
	}
	return (node_count);
}
