#include "main.h"

/**
 * print_sign - prints the sign of a
 * number
 * @n: function parameter
 * Return: -1 if negative, 0 if zero
 * 1 if positive
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
	} else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('0');
	return (0);
}
