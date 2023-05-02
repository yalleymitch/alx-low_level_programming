#include "lists.h"

/**
 * add_nodeint - Itinserts a new node to the linked list's starting point.
 * @head: it therefore indicates to the list's beginning node
 * @e: data to input in that new node
 *
 * Return: it identifies the new node when successful, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int e)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->e = e;
	new->next = *head;
	*head = new;

	return (new);
}
