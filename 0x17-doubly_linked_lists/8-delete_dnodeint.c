#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at an index
 * @head: head
 * @index: index
 * Return: 1 (success) -1 (Failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *temp, *previous;
	unsigned int i = 0;

	while (i < index)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);
	temp = current->next;
	previous = current->prev;
	if (previous)
		previous->next = temp;
	if (temp)
		temp->prev = previous;
	if (*head == current)
		*head = temp;
	free(current);
	return (1);
}
