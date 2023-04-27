#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node_end - adds a new node at the beginning of a list_t list.
  * @head: double ptr to the list_t list
  * @str: the new string to add in the node
  * Return: the address of the new element, or NULL if it failed
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL); /* check if the allocation failed */
	}
	new_node->str = strdup(str); /*duplicate the string*/
	new_node->len = strlen(str);
	new_node->next = NULL; /*make the new node the last node of the list*/

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
	return (new_node);
}
