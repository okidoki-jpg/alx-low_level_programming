#include "main.h"

/**
 * print_numbers - print ascii digits
 * Return: void
 */

void print_numbers(void)
{
	int idx = 0;

	while (++idx < 10)
		_putchar(idx);
	_putchar(10);
}
