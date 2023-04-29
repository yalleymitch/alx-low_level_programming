#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - creates a new node at the starting point of a linked list.
 * @head: to the list_t list via a dual pointer
 * @str: To amend the node with a new string
 *
 * Return: returns the new element's address, or NULL if it fails to function.
 */
list_t *add_node(list_t **head, const char *str)
{
 list_t *new;
 unsigned int x = 0;

 while (str[x])
 x++;

 new = malloc(sizeof(list_t));
 if (!new)
 return (NULL);

 new->str = strdup(str);
 new->x = x;
 new->next = (*head);
 (*head) = new;

 return (*head);
}
