#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at index
 * @head: head of node
 * @index: index
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
