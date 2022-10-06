#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: size of memory
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	if (b)
		return (b);
	exit(98);
}
