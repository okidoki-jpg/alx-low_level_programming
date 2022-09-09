#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int count = 97;

	while (count < 123)
	{
		if (count == 113 || count == 101)
		{
			continue;
		}
		putchar(count++);
	}
	putchar(10);
	return (0);
}
