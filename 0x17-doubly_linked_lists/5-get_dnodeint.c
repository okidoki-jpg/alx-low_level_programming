#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the list
 * @index: nth node
 *
 * Return: nth node if found, else NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int idx = 0;

	while (node && idx != index)
	{
		node = node->next;
		idx++;
	}

	if (node && idx == index)
		return (node);
	return (NULL);
}
