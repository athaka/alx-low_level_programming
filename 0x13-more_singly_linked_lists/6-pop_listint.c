#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to the pointer of the head of the listint_t list.
 *
 * Return: The head node’s data (n), or 0 if the linked list is empty.
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head; /* save the current head node*/
	data = temp->n; /* get the data of the head node */
	*head = temp->next; /* update the head to the next node */
	free(temp); /* free the original head node */

	return (data);
}
