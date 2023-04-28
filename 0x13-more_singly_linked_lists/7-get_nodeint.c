#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a
 * linked lisr
 * @head: linked list
 * @index: index of node
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (h == NULL)
			return (NULL);
		h = h->next;
	}
	return (h);
}
