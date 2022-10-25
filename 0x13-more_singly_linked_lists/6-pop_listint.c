#include "lists.h"

/**
 * pop_listint - pop the head node and return it's value
 * @head: node to pop
 *
 * Return: value of node, 0 on fail
 */

int pop_listint(listint_t **head)
{
	listint_t *pop = *head;

	if (!*head)
		return (0);

	*head = (*head)->next;
	return (pop->n);
}
