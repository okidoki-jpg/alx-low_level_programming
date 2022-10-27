#include "lists.h"

/**
 * print_listint - print all the elements of a
 * listint_t linked list
 * @h: entry node into the linked list
 *
 * Return: size_t (number of elements in list)
 */

size_t print_listint(const listint_t *h)
{
	size_t res = 0;

	while (h)
	{
		printf("%d\n", h->n);
		res++;
		h = h->next;
	}

	return (res);
}
