#include "main.h"

/**
 * _puts_recursion - print string recursively
 * @s: string to print
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s++);
		_puts_recursion(s);
	}
	else
		_putchar(10);
}
