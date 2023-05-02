#include "lists.h"

/**
 * print_listint - a linked list's entirely sections are printed.
 * @h: to print a list that is linked of type listint_t
 *
 * Return: this shows the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->e);
		num++;
		h = h->next;
	}

	return (num);
}
