#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print each argument on new line
 * @seperator: seperating character
 * @n: last named argument of function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x, i = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (separator && i + 1 < n)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
