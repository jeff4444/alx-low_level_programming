#include "lists.h"
/**
 * free_listint2 - frees a linked list while
 * setting head to NULL
 * @head: linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *h = *head;
	listint_t *another;

	h = h->next;
	*head = NULL;
	another = h;
	while (another)
	{
		h = h->next;
		free(another);
		another = h;
	}
	free(another);
}
