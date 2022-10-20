#include "lists.h"

/**
 * list_len - return linked list length 
 * @h: entry point to linked list
 *
 * Return: number of list elements
 */

size_t list_len(const list_t *h)
{
	const list_t *idx;
	int count = 0;

	if (!h)
		return (0);

	idx = h;
	while (idx)
	{
		count++;
		idx = idx->next;
	}
	return (count);
}
