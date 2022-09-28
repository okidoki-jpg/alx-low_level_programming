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
		_print_rev_recursion(_putchar(*s++));
		_puts_recursion(s);
	}
	else
		_putchar(10);
}
