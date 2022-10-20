#include "lists.h"

/**
 * add_node_end - add node to linked list
 * @head: next node
 * @str: string to append
 *
 * Return: address to new element, null on fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *path = *head, *node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = NULL;
	if (!path)
		*head = node;
	else
	{
		while (path->next)
			path = path->next;
		path->next = node;
	}

	return (node);
}

/**
 * _strlen - determine string length
 * @str: string to evaluate
 *
 * Return: length of string
 */

int _strlen(const char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}
