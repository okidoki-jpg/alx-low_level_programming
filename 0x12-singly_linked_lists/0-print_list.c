#include "lists.h"

/**
 * print_list - print contents of linked list
 * @h: entry point to linked list
 *
 * Return: number of list elements
 */

size_t print_list(const list_t *h)
{
	const list_t *idx;
	int count = 0;

	if (!h)
		return (0);

	idx = h;
	while (idx)
	{
		count++;
		if (!idx->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", idx->len, idx->str);
		idx = idx->next;
	}
	return (count);
}
