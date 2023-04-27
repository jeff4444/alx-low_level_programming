#include "lists.h"
/**
 * print_list - prints all elements in a linked list
 * @h: linked list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;
	list_t *head;

	if (h == NULL)
		return (0);
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	head = h->next;

	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", head->len, head->str);
		head = head->next;
		i++;
	}
	return (i);
}
