#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add node to linked list
 * @head: next node
 * @str: string to append
 *
 * Return: address to new element, null on fail
 */

list_t *add_node(list_t **head, const char *str)
{
	int len = _strlen(str);
	list_t *node = malloc(sizeof (list_t));

	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = len;
	node->next = *head;
	*head = node;

	return (node);
}

/**
 * _strlen - determine string length
 * @str: string to evaluate
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int i = 0;

	while (*str)
		i++;
	str++;

	return (i);
}
