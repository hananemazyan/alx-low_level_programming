#include "lists.h"
#include <stdlib.h>

/**
  * list_len -  function that prints all the elements of a list_t list.
  * @h: pointer to the list_t list
  * Return: the number of nodes
  */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next; /*next node*/
	}
	return (count);
}
