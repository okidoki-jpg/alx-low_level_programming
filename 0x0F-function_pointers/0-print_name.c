#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - pointer function that prints name
 * @name: name to print
 * @f: function parameter
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return (NULL);
	f(name);
}
