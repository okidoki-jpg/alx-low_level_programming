#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at given index
 * @head: entry node into linked list
 * @idx: position to place new node
 * @n: value to append to node
 *
 * Return: node, NULL on fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *next = *head, *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	while (idx - 1)
	{
		if (!next)
			return (NULL);
		--idx;
		next = next->next;
	}

	node->n = n;
	node->next = next->next;
	next->next = node;	
	return (node);
}
