#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int hundr = 0;
	int tenth = 1;
	int unit = 2;

	while (hundr < 8)
	{
		while (tenth < 9)
		{
			while (unit < 10)
			{
				putchar(hundr + '0');
				putchar(tenth + '0');
				putchar(unit++ + '0');
				if (hundr != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
			tenth++;
			unit = tenth + 1;
		}
		hundr++;
		tenth = hundr + 1;
		unit = tenth + 1;
	}
	putchar(10);
	return (0);
}
