#include "lists.h"

/**
 * add_dnodeint - adds a node to the start of a list
 * @head: head
 * @n: n value
 * Return: new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
