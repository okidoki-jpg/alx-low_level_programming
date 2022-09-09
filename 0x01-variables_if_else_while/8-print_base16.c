#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int count = 48;

	while (count != 103)
	{
		putchar(count++);
		if (count == 58)
		{
			count += 39;
		}
	}
	putchar(10);
	return (0);
}
