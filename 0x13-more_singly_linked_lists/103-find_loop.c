#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to head of list
 *
 * Return: address of the node where the loop starts, or NULL no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head, *hare = head;

	/* hare and tortoise pointers move through the list until they meet */
	while (hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare) /* check if they meet */
		{
			tortoise = head; /* reset tortoise to head of list */
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (hare); /* return address of node where loop starts */
		}
	}
	return (NULL);
}
