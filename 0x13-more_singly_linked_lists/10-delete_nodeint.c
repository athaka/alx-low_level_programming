#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 * index in a listint_t linked list.
 * @head: A pointer to the pointer of the head of the listint_t list.
 * @index: The index of the node to be deleted (starting at 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *temp;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	current = *head;
	for (i = 0; i < index - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
		return (-1);
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
