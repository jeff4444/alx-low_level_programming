#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node
 * @head: linked list
 * @idx: index to insert
 * @n: int value for new node
 *
 * Return: new list
 */
listint_t *insert_nodeint_at_index(listint_t **head,
		unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *temp;
	unsigned int i;
	listint_t *h = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	for (i = 1; i < idx; i++)
	{
		if (h == NULL)
			return (NULL);
		h = h->next;
	}
	temp = h->next;
	h->next = newNode;
	newNode->next = temp;

	return (newNode);
}
