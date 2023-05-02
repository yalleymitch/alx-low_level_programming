#include "lists.h"

/**
 * get_nodeint_at_index - displays or the node at index in a linked list
 * @head: it shows first node in the linked list
 * @index: this is the Index of the node to return.
 *
 * Return: This points to the node we are searching for, or it gives NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int g = 0;
	listint_t *temp = head;

	while (temp && g < index)
	{
		temp = temp->next;
		g++;
	}

	return (temp ? temp : NULL);
}
