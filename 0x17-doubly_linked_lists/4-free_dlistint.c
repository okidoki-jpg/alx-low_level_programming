#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node, *next_node;

	if (head)
	{
		node = head;
		next_node = head->next;
		while (next_node)
		{
			free(node);
			node = next_node;
			next_node = next_node->next;
		}
		free(node);
	}
}
