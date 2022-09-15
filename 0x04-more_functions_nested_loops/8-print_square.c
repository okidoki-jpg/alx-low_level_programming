#include "main.h"

/**
 * print_square - print n x n square
 * using '#'
 * Return: void
 */

void print_square(int size)
{
	int idx, n = size;

	if (size > 0)
	{
		while (size--)
		{
			idx = n;
			while (idx--)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
