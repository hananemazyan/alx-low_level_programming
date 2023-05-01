#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow = head, *fast = head;

	if (head == NULL)
		exit(98);

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		printf("[%p] %d\n", (void *)slow, slow->n);

		if (slow == fast)
		{
			count++;
			slow = slow->next;
			while (slow != fast)
			{
				count++;
				printf("[%p] %d\n", (void *)slow, slow->n);
				slow = slow->next;
			}
			printf("[%p] %d\n", (void *)slow, slow->n);
			break;
		}
		count++;
	}

	return (count);
}
