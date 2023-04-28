#include "lists.h"
/**
 * add_nodeint - adds a node at the beginning
 * @head: address to linked list
 * @n: int value for new node
 *
 * Return: new linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
