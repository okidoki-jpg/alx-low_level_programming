#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at given index
 * @head: entry node into linked lisy
 * @index: location of node to remove
 *
 * Return: 1 on success, -1 on fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pop = *head;

	if (!*head)
		return (-1);

	if (!index)
	{
		*head = pop->next;
		free(pop);
		return (1);
	}

	while (index > 1)
	{
		if (!pop->next)
			return (-1);
		index--;
		pop = pop->next;
	}

	pop->next = pop->next->next;
	free(pop->next);
	return (1);
}
