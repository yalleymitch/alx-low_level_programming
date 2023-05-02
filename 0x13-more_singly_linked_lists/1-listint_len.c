#include "lists.h"

/**
 * listint_len - it yields the number of a linked list's components.
 * @h: it traverse a linked list of the type listint_t
 *
 * Return: it displays the number of nodes
 */



size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
