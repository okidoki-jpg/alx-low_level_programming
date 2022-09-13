#include "main.h"

/**
 * jack_bauer - print all minutes of
 * the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hr = -1;
	int min;

	while (hr++ < 23)
	{
		min = -1;
		while (min++ < 59)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar(10);
		}
	}
}
