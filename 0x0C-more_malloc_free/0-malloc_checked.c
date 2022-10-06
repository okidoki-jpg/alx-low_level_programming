#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: size of memory
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *a = b;
	a = malloc(b)

	if (!(malloc(b)))
		exit(98);
	return (a);
}
