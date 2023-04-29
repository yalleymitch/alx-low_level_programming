#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - a list that is only connected once
 * @str: string - it is the malloc'ed string
 * @len: The length of a string
 * @next: displays the next nodes.
 *
 * Description: for the Holberton project, a singly linked list node structure
 * 
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
void free_list(list_t *head);

#endif
