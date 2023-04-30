#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL.
 * @head: double pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *ECH;

	if (head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		ECH = *head;
		*head = (*head)->next;
		free(ECH);
	}
	*head = NULL;
}
