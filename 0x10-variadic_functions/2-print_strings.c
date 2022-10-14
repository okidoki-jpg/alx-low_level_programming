#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print each argument with a seperator
 * @separator: seperating string
 * @n: last named argument of function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *x;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char *);
		if (!x)
			x = "(nil)";
		printf("%s", x);
		if (separator && i + 1 < n)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
