#include "main.h"

/**
 * print_last_digit - prints the last
 * digit of a number
 * @n: function parameter
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = (n * -1) % 10;
	_putchar(n + '0');
	return (n);
}
