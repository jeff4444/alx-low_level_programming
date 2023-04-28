#include "lists.h"
/**
 * listint_len - returns number of nodes in a linked
 * list
 * @h: linked list
 *
 * Return: length of list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
