#include "lists.h"

/**
 * listint_len - determine length of listint linked list
 * @h: entry node into the linked list
 *
 * Return: size_t (number of elements in list)
 */

size_t listint_len(const listint_t *h)
{
	size_t res = 0;

	while (h)
	{
		res++;
		h = h->next;
	}

	return (res);
}
