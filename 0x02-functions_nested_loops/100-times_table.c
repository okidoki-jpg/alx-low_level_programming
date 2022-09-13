#include "main.h"
/**
 * print_times_table - prints the n
 * times table greater than 0, less
 * than 15
 * @n: function parameter
 * Return: void
 */

void print_times_table(int n)
{
	int tot, incr, num = 0;

	while (num++ < n && n < 15 && n > -1)
	{
		incr = -1;
		while (incr++ < n)
		{
			tot = num * incr;
			if (tot > 99)
			{
				_putchar((tot / 100) + '0');
				_putchar((tot / 10) % 10 + '0');
				_putchar((tot % 10) + '0');
			} else if (tot > 9)
			{
				_putchar((tot / 10) + '0');
				_putchar((tot % 10) + '0');
			} else if (tot < 10)
			{
				_putchar((tot % 10) + '0');
			}
			if ((tot + num) < 10 && incr < n)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			} else if ((tot + num) < 100 && incr < n)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			} else if (incr < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}
