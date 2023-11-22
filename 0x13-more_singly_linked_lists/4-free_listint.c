#include "lists.h"

/**
 * free_listint - Frees a list_t list.
 * @head: A pointer to the head of the list_t list.
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
