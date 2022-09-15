#include "main.h"

/**
 * print_diagonal - print diagonal line
 * of n size using '\'
 * @n: size of line
 * Return: void
 */

void print_diagonal(int n)
{
	int sp, size = n;

	if (n > 0)
	{
		while (n--)
		{
			sp = size;
			while (sp--)
			{
				if (sp == n)
				{
					_putchar('\\');
					_putchar(10);
					break;
				}
				else
					_putchar(' ');
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
