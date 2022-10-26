#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *  * main - check the code .
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	listint_t *n = NULL;
	free_listint2(&n);
	printf("Freed !\n");
	return (0);
}
