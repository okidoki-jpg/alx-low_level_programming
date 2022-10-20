#include "lists.h"

/**
 * print_list - print contents of linked list
 * @h: entry point to linked list
 *
 * Return: number of list elements
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	if (!h)
	{
		printf("[0] (nil)\n");
		return (0);
	}
	while (h)
	{
		count++;
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
