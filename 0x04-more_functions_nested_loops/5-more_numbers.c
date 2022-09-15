#include "main.h"

/**
 * more_numbers - print digits 0-14
 * ten times
 * Return: void
 */

void more_numbers(void)
{
	int num, idx = -1;

	while (++idx < 10)
	{
		num = -1;
		while (++num < 10)
			_putchar(idx + '0');
		putchar(10);
	}
}
