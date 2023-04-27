#include "lists.h"
#include <stdio.h>

/**
  * print_list -  function that prints all the elements of a list_t list.
  * @h: pointer to the list_t list
  * Return: the number of nodes
  */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		/*increment the count and print the str */
		printf("[%d] %s\n", h->len, (h->str == NULL) ? "(nil)" : h->str);
		count++;

		h = h->next; /*next node*/
	}
	return (count);
}
