#include "lists.h"

/**
 * dlistint_len - returns the length of a linked list
 * @h: head of linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
