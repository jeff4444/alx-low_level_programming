#include "lists.h"
/**
 * free_listint - frees linked list
 * @head: linked list
 */
void free_listint(listint_t *head)
{
	listint_t *h;

	h = head;
	while (h)
	{
		head = head->next;
		free(h);
		h = head;
	}
}
