#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at a given index
 * @h: pointer to list head
 * @idx: new node index
 * @n: node data
 *
 * Return: new node address in success, else NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *node;
	unsigned int index, i = 0;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (idx == 0)
	{
		node->prev = NULL;
		node->next = *h;
		if (*h)
			(*h)->prev = node;
		*h = node;
		return (*h);
	}

	index = idx - 1;
	while (tmp && i != index)
	{
		i++;
		tmp = tmp->next;
	}

	if (i == index && tmp)
	{
		node->prev = tmp;
		node->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = node;
		tmp->next = node;
		return (node);
	}

	free(node);
	return (NULL);
}
