#include "lists.h"

/**
 * pop_listint - pop the head node and return it's value
 * @head: node to pop
 *
 * Return: value of node, 0 on fail
 */

int pop_listint(listint_t **head)
{
	int res;
	listint_t *pop = (*head)->next;

	if (!*head)
		return (0);

	res = (*head)->n;
	free(*head);
	*head = pop;

	return (res);
}
