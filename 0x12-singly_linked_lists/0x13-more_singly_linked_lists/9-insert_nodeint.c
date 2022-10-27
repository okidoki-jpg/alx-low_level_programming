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

	node->n = n;

	if (!idx)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	while (idx > 1)
	{
		if (!next)
			return (NULL);
		idx--;
		next = next->next;
	}

	node->next = next->next;
	next->next = node;
	return (node);
}
