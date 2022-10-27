#include "main.h"

/*
 * get_bit - return bit at given index
 * @n: number to read
 * @index: location of bit to find
 *
 * Return: bit at given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n > sizeof(n) * 8)
		return (-1);

	n >>= index;
	return (n & 1);
}
