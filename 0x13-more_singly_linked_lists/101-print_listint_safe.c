#include "lists.h"

int set(const listint_t *node, const listint_t *head, int res);

/**
 * print_listint_safe - print all the elements of a
 * listint_t linked list
 * @head: entry node into the linked list
 *
 * Return: size_t (number of elements in list)
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t res = 0;
	const listint_t *node = head;

	if (!head)
		exit(98);

	while (head)
	{
		if (set(node, head, res))
		{
			printf("[%p] %d\n", (void *)node, node->n);
			node = node->next;
			res++;
		}
		else
			break;
	}
	if (node)
		printf("[%p] %d\n", (void *)node, node->n);


	return (res);
}

int set(const listint_t *node, const listint_t *head, int res)
{
	int idx = 0;

	while (node != head)
	{
		head = head->next;
		idx++;
	}
	if (idx == res)
		return (1);
	return (0);
}
