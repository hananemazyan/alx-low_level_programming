#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to a pointer to the head node of the list
 * @idx: Index of the list where the new node should be added
 * @n: Value to be stored in the new node
 *
 * Return: Pointer to the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *prev = NULL;
	listint_t *new_node = NULL;
	unsigned int count = 0;

	while (current != NULL && count < idx)
	{
		prev = current;
		current = current->next;
		count++;
	}

	if (count < idx)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (prev == NULL)
	{
		*head = new_node;
	}
	else
	{
		prev->next = new_node;
	}

	new_node->next = current;

	return (new_node);
}

