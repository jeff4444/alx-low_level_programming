#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a position
 * @h: head of list
 * @idx: index
 * @n: n value of new node
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *newNode, *temp;
	unsigned int i = 1;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	current = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (i < idx)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (NULL);
	temp = current->next;
	current->next = newNode;
	newNode->prev = current;
	newNode->next = temp;
	if (temp)
		temp->prev = newNode;
	return (newNode);
}
