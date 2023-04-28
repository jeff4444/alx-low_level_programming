#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: linked list
 * @index: index to delete
 *
 * Return: 1 if success and -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h = *head;
	listint_t *another = h;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	for (i = 0; i < index; i++)
	{
		if (h == NULL)
			return (-1);
		h = h->next;
		if (i != 0)
			another = another->next;
	}
	if (index == 0)
		*head = (*head)->next;
	else
		another->next = h->next;
	return (1);
}
