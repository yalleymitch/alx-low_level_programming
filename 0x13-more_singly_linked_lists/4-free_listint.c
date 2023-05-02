#include "lists.h"

/**
 * free_listint - this Frees a linked list
 * @head: listint_t list is to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		free(head);
		temp = head->next;
		head = temp;
	}
}
