#include "lists.h"

/**
 * free_listint - free listint memory
 * @head: entry node into the linked list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
