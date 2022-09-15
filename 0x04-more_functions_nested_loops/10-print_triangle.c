#include "main.h"

/**
 * print_triangle - print triangle of
 * n size using '#'
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int sp, n = size;

	if (size > 0)
	{
		while (size--)
		{
			sp = 0;
			while (sp++ < n)
			{
				if (sp > size)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
