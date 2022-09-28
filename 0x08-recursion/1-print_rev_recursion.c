#include "main.h"

/**
 * _print_rev_recursion - print string in reverse 
 * recursively
 * @s: string to print
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s++);
		_putchar(*s)
	}
	else
		_putchar(10);
}
