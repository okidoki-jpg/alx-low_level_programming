#include "main.h"

/**
 * print_line - print '_' n times
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
			_putchar('_');
	}
	_putchar(10);
}
