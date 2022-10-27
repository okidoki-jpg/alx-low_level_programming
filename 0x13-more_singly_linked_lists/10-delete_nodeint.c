#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes list elements
 * @head: Singly linked list head pointer
 * @index: Integer index of node to return
 *
 * Description: Deletes an element at index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int size = (unsigned int)listint_len((*head));
	listint_t *temp, *temp2;

	if (index >= size)
		return (-1);
	if (index == 0)
	{
		pop_listint(head);
		return (1);
	}
	if (index < size)
	{
		temp = get_nodeint_at_index(*head, index - 1);
		temp2 = temp->next;
		temp->next = (temp2->next == NULL) ? NULL : temp2->next;
		free(temp2);

		return (1);
	}

	return (-1);
}

