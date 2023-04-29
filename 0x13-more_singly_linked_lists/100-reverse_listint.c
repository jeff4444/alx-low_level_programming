#include "lists.h"
/**
 * reverse_listint - reverse a linked list
 * @head: linked list
 *
 * Return: reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *h = NULL;

	while ((*head))
	{
		temp = (*head)->next;
		(*head)->next = h;
		h = (*head);
		(*head) = temp;
	}
	(*head) = h;
	return (*head);
}
