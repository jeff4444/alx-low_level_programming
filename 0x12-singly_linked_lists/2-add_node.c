#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a
 * linked list
 * @head: linked list
 * @str: str member of next node
 *
 * Return: Linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nextNode;
	unsigned int len;
	char *newStr;

	nextNode = malloc(sizeof(list_t));
	if (nextNode == NULL)
		return (NULL);
	newStr = strdup(str);

	len = 0;
	while (str[len] != '\0')
		len++;
	nextNode->str = newStr;
	nextNode->len = len;
	nextNode->next = (*head);
	*head = nextNode;
	return (*head);
}
