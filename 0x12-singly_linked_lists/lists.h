#ifndef LIST_H
#define LIST_H
#include <stdlib.h>
#include <stdio.h>
/**
 * struct node - linked list node
 * @str: string value
 * @len: length of string
 * @next: next node
 */
struct node
{
	char *str;
	unsigned int len;
	struct node *next;
};

typedef struct node list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif
