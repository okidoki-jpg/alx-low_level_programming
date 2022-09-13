#include "main.h"

/**
 * times_table - prints the nine times
 * table
 *
 * Return: void
 */

void times_table(void)
{
	int num = -1;
	int tot;
	int incr;
	while (num++ < 9)
	{
		incr = -1
		while (incr++ < 9)
		{
			tot = num * incr;
			if (tot > 9)
			{
				_putchar((tot / 10) + '0');
				_putchar((tot % 10) + '0');
				_putchar(',');
			} else
			{
				_putchar((tot % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			_putchar(' ');
		}
		_putchar(10);
	}
}
