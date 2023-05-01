#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a linked list, even if it has a loop.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *tmp;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		count++;
		if ((*h)->next >= *h)
		{
			*h = NULL;
			break;
		}
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
	}

	*h = NULL;

	return (count);
}
