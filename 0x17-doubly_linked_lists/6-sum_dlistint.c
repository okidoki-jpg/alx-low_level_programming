#include "lists.h"

/**
 * sum_dlistint - return the sum of all the (n) values of a dlistint_t list
 * @head: pointer to the list
 *
 * Return: sum of all n values, 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		node = node->next;
		sum += node->n;
	}

	return (sum);
}
