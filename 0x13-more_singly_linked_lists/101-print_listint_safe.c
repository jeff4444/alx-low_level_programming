#include "lists.h"
/**
 * print_listint_safe - prints a linked list
 * @head: linked list
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int i = 0;
	while (head)
	{
		printf("[%p] %d\n", head, head->n);
		i++;
	}
	return (i);
}
