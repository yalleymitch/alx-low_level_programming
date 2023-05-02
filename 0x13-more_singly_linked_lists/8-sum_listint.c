#include "lists.h"

/**
 * sum_listint - this calculates the sum of all the data in listint_t list
 * @head: it show the beginning node in the linked list
 *
 * Return: this shows resulting sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->e;
		temp = temp->next;
	}

	return (sum);
}
