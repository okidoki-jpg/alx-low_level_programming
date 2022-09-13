#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	int idx = 97;

	while (idx < 123)
	{
		_putchar(idx++);
	}
	_putchar(10);
}
