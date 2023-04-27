#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: linked list
 */
void free_list(list_t *head)
{
	list_t *h;

	h = head;
	while (h)
	{
		free(h->str);
		head = head->next;
		free(h);
		h = head;
	}
}
