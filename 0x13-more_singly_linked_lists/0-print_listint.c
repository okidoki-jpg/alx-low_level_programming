#include "lists.h"

/**
 * print_listint - prints list elements
 * @h: Singly linked list head pointer
 *
 * Description: prints all the elements of a listint_t list
 * Return: the number of nodes.
 */

size_t print_listint(listint_t *h)
{
	size_t size = 1;


	while (h->next)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}
	printf("%d\n", h->n);

	return (size);
}
