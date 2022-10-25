#include "lists.h"

/**
 * add_nodeint - add node to begining of linked list
 * @head: first node in linked list
 * @n: value to append to node
 *
 * Return: pointer to new head, null if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
