#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_list - liberates a connected
 * *@head: list_t list must be released.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
{
	temp = head->next;
	free(head->str);
	head = temp;
	free(head);
}
