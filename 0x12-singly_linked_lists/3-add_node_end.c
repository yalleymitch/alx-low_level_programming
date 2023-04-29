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
	char *re;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	re = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = re;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
