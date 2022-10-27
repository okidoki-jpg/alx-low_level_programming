#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Reverse a singly linked list.
 * @head: Pointer to list head pointer.
 *
 * Description: Reverses a listint_t linked list.
 * Return: pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
