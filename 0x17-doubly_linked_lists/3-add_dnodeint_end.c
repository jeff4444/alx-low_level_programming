#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end
 * @head: head of node
 * @n: n value
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *current = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	while (current->next)
		current = current->next;
	current->next = newNode;
	newNode->prev = current;
	return (newNode);
}
