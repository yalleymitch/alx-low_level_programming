#include <stdlib.h>
#include "lists.h"
#include <string.h>


/**
 * add_node_end - it adds or modifies a new node at the end of a linked list
 * @head: shows Double Pointer to the list_t list
 * @str: it is a string to put in the new node
 *
 * Return: returns the new element's address, or NULL if it fails to function or work.
 */
list_t *add_node_end(list_t **head, const char *str)
{
 list_t *new;
 list_t *temp = *head;
 unsigned int re = 0;

 while (str[re])
 re++;

 new = malloc(sizeof(list_t));
 if (!new)
 return (NULL);

 new->str = strdup(str);
 new->re = re;
 new->next = NULL;

 if (*head == NULL)
 {
 *head = new;
 return (new);
 }

 while (temp->next)
 temp = temp->next;

 temp->next = new;

 return (new);
}
