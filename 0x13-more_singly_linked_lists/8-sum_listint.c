#include "lists.h"

/**
 * sum_listint - calculate sum of linked list values
 * @head: entry node into linked list
 *
 * Return: sum of linked list values
 */

int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int res = 0;

	while (node)
	{
		res += node->n;
		node = node->next;
	}
	return (res);
}
