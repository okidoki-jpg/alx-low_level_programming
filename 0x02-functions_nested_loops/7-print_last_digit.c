#include "main.h"

/**
 * print_last_digit - prints the last
 * digit of a number
 * @n: function parameter
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int retVal;
	if (n < 0)
	{
		retVal = (n * -1) % 10;
		_putchar(retVal);
		return (retVal);
	}
	retVal = n % 10;
	_putchar(retVal);
	return (retVal);
}
