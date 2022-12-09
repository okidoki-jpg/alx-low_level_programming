#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the first element of the list
 * @n: int to set in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;

		new->prev = tmp;
		tmp->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);
}
