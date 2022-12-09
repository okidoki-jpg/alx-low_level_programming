#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at given index
 * @head: pointer to the list head
 * @index: location of node
 *
 * Return: 1 on success, else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head, *del = *head;
	unsigned int idx, cnt = 0;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = del->next;
		free(del);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	idx = index - 1;
	while (node && cnt != idx)
	{
		cnt++;
		node = node->next;
	}

	if (cnt == idx && node)
	{
		del = node->next;
		if (del->next)
			del->next->prev = node;
		node->next = del->next;
		free(del);
		return (1);
	}

	return (-1);
}
