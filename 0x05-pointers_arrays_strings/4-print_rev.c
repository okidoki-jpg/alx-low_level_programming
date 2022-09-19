#include "main.h"

/**
 * _strlen - get string length
 * @s: string to evaluate
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * print_rev - print string in reverse
 * @s: string to print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int idx = _strlen(s) - 1;

	while (idx >= 0)
	{
		_putchar(s[idx--]);
	}
	_putchar(10);
}
