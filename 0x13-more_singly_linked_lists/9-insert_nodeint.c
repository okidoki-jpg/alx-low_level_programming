#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert list elements
 * @head: Singly linked list head pointer
 * @idx: Integer index of node to return
 * @n: data for the new node
 *
 * Description: Inserts a new element with data n at index idx
 * Return: listint_t pointer to element or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int size = (unsigned int)listint_len((*head));
	listint_t *temp, *new;

	if (size < idx)
		return (NULL);
	if (idx == 0)
		return (add_nodeint(head, n));
	if (idx == size)
		return (add_nodeint_end(head, n));
	if (idx < size)
	{
		temp = get_nodeint_at_index(*head, idx - 1);
		new = malloc(sizeof(listint_t));

		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = temp->next;
		temp->next = new;
		return (new);
	}

	if (*head == NULL)
		return (NULL);

	return (NULL);
}

