#include "lists.h"

/**
 * print_listint - prints list elements
 * @h: Singly linked list head pointer
 *
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t size = 0;


	while (h)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}

	return (size);
}
