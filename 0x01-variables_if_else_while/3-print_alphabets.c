#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int count = 97;

	while (count != 91)
	{
		putchar(count++);
		if (count == 123)
		{
			count -= 58;
		}
	}
	putchar(10);
	return (0);
}
