#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of a linked list
 * @head: last node in linked list
 * @n: value to append to node
 *
 * Return: pointer to new node, NULL on fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *next = *head, *node = malloc(sizeof(listint_t));


	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!next)
		*head = node;
	else
	{
		while (next->next)
			next = next->next;
		next->next = node;
	}
	return (node);
}
