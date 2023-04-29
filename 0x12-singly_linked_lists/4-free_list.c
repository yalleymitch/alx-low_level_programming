#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_list - it liberates a connected link
 * *@head: list_t list must be released.
 */
void free_list(list_t *head)
{
	list_t *emp;

	while (head)
{
	emp = head->next;
	free(head->str);
	head = emp;
	free(head);
}
}
