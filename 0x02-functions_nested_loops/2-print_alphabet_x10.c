#include "main.h"

/**
 * print_alphabet_x10 - print the
 * alphabet followef by a new line
 * ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int idx;
	int count = 0;

	while (count < 10)
	{
		idx = 97;
		while (idx < 123)
		{
			_putchar(idx++);
		}
		_putchar(10);
		count++;
	}
}
