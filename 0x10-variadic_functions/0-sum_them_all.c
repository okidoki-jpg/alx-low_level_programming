#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - tally variadic function arguments
 * @n: last named argument of function
 *
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0, x, i = 0;
	
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
