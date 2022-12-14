#include <stdio.h>

/**
 * print_to_98 - print increments to 98
 *
 * @n: function parameter
 * Return: void
 */

void print_to_98(int n)
{
	while (!(n == 98))
	{
		if (n < 99)
			printf("%d", n++);
		else if (n > 98)
			printf("%d", n--);
		printf(", ");
	}
	puts("98");
}
