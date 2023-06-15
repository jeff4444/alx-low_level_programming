#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while ((current = head))
	{
		head = head->next;
		free(current);
	}
}
