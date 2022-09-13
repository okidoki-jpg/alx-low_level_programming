#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10 - print the
 * alphabet followef by a new line
 * ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int idx = 97;
	int count = 0;

	while (count < 10)
	{
		while (idx < 123)
		{
			_putchar(idx);
		}
		_putchar(10);
	}
}
