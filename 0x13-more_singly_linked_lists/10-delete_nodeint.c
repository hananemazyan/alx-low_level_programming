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
		/* Empty list */
		return (-1);
	}

	if (index == 0)
	{
		/* First node should be deleted */
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (current != NULL && i < index)
	{
		/* Traverse the list to find the node to be deleted */
		prev = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		/* Index is greater than the number of nodes in the list */
		return (-1);
	}

	/* Delete the node */
	prev->next = current->next;
	free(current);
	return (1);
}
