#include <stdio.h>
#include "lists.h"

/**
 * print_list - display or show all the variables of a linked list
 * @h: this points to the list_t list to print
 *
 * Return: It prints number of nodes on success
 *
 */
size_t print_list(const list_t *h)
{
 size_t ya = 0;

 while (h)
 {
 if (!h->str)
 printf("[0] (nil)\n");
 else
 printf("[%u] %s\n", h->len, h->str);
 h = h->next;
 ya++;
 }

 return (ya);
}
