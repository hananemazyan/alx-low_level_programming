#include "lists.h"
#include <stdlib.h>

/**
  * free_list - frees a linked list
  * @head: list_t to be freed
  */

void free_list(list_t *head)
{
	list_t *ECH;

	while (head)
	{
		ECH = head->next;
		free(head->str);
		free(head);
		head = ECH;
	}
}
