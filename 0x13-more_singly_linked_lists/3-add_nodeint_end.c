#include "lists.h"
/**
 * add_nodeint_end - add node to end of linked list
 * @head: address of linked list
 * @n: int value for new node
 *
 * Return: new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h = *head;
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		while (h->next)
			h = h->next;
		h->next = newNode;
	}

	return (*head);
}
