#include "main.h"

/**
 * print_most_numbers - print all
 * digits but 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int idx = -1;

	while (++idx < 10)
	{
		if (idx == 2 || idx == 4)
			continue;
		_putchar(idx + '0');
	}
	_putchar(10);
}
