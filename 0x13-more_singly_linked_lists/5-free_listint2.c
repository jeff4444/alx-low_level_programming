#include "lists.h"
/**
 * free_listint2 - frees a linked list while
 * setting head to NULL
 * @head: linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *h = *head;
	if (*head == NULL)
	{
		return;
	}

	while (h)
	{
		h = h->next;
		free(*head);
		*head = h;
	}
	free(h);
	*head = NULL;
}
