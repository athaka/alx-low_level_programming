#include "lists.h"

/**
 * free_listint2 - Frees a list_t list.
 * @head: A pointer to the pointer to the head of the list_t list.
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}
