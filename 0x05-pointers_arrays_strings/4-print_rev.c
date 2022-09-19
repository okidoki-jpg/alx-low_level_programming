#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string to print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int idx = _strlen(s);

	while (idx >= 0)
	{
		_putchar(s[idx--]);
	}
	_putchar(10);
}
