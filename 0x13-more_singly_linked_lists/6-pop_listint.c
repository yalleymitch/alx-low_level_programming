#include "lists.h"

/**
 * pop_listint - a linked list's head node gets deleted
 * @head: indicates the first element in the linked list
 *
 * Return: the information included in the components that were removed,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	temp = (*head)->next;
	num = (*head)->e;
	free(*head);
	*head = temp;

	return (num);
}
