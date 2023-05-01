#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position
 * @head: Pointer to a pointer to the head node of the list
 * @index: Index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head;
	listint_t *current = (*head)->next;
	unsigned int i = 1;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (current != NULL && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		return (-1);
	}
	prev->next = current->next;
	free(current);
	return (1);
}
