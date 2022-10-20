#include "lists.h"

/**
 * print_list - print contents of linked list
 * @h: entry point to linked list
 *
 * Return: number of list elements
 */

size_t print_list(const list_t *h)
{
	list_t *idx;
	int count = 0;

	if (!h)
	{
		printf("[0] (nil)\n");
		return (0);
	}
	while (h)
	{
		idx = h->next;
		printf("[%d] %s\n", h->len, h->str);
		count++;
		count = print_list(idx);
		return (count);
	}
}
