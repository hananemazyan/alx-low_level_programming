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
	int dif;
	listint_t *tmp;

	if (h == NULL  || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;
	return (count);
}
