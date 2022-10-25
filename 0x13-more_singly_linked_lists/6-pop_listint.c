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
	listint_t *pop;

	if (!*head)
		return (0);

	pop = *head;
	res = pop->n;
	*head = pop->next;

	free(pop);



	return (res);
}
