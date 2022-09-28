#include "main.h"

/**
 * _strlen_recursion - get string length recursively
 * @s: string to print
 *
 * Return: void
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		_strlen_recursion(s + 1);
	}
}
