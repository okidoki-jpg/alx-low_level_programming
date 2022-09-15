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
			while (sp++ < size)
			{
				if (sp > n)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar(10);
		}
	}
}
