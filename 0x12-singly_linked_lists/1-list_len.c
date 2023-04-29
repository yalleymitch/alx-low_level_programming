#include <stdlib.h>
#include "lists.h"

/**
 * list_len - displays the number of elements in a connected list
 * @h: it normally points to the list_t list
 *
 * Return: it shows the number of elements in h
 */
size_t list_len(const list_t *h)
{
 size_t u = 0;

 while (h)
 {
 u++;
 h = h->next;
 }
 return (u);
}
