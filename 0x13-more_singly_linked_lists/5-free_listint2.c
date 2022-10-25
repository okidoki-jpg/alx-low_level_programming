#include "lists.h"

/**
 * free_listint2 - free listint memory, make head NULL
 * @head: entry node into the linked list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *next = *head;

	while (*head)
	{
		next = next->next;
		free(*head);
		*head = next;
	}
}
