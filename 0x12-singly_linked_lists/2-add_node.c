#include <stdlib.h>
#include <string.h>
#include "lists.h"



/**
  * add_node - adds a new node at the beginning of a list_t list.
  * @head: double ptr to the list_t list
  * @str: the new string to add in the node
  * Return: the address of the new element, or NULL if it failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

			if (new_node == NULL)
			{
			return (NULL); /* check if the allocation failed */
			}
			new_node->str = strdup(str); /*duplicate the string*/
			new_node->len = strlen(str);
			new_node->next = *head; /* make the new node the head of list*/
			*head = new_node;
			return (new_node);
			}
