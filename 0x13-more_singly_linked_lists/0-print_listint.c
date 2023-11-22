#include "lists.h"

/**
 * print_listint - Prints all integers of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t node_count = 0;

	while (current != NULL)
	{
		if (current->n != 0)
			printf("%u\n", current->n);
		else
			return (0);
		current = current->next;
		node_count++;
	}
	return (node_count);
}
