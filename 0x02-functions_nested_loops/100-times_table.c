#include "main.h"

/**
 * print_times_table - prints the n
 * times table greater than 0, less
 * than 15
 *
 * @n: function parameter
 * Return: void
 */

void print_times_table(int n)
{
	int num = -1;
	int tot;
	int incr;

	if (n > 15 || n < 0)
		return;
	while (num++ < n)
	{
		incr = -1;
		while (incr++ < n)
		{
			tot = num * incr;
			if (tot > 9)
			{
				_putchar((tot / 10) + '0');
				_putchar((tot % 10) + '0');
			} else if (tot < 10)
			{
				_putchar((tot % 10) + '0');
			}
			if ((tot + num) < 10 && incr < 9 && (n * n) != tot)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			} else if (incr < 9 && (num * n) != tot)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}
