#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int idx = 97;

	while (idx < 123)
	{
		_putchar(idx);
	}
	_putchar(10);
	return;
}
