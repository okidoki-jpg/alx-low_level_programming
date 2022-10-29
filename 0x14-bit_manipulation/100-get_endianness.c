 #include "main.h"

/**
 * get_endianness - describe how byte is read
 *
 * Return: 1 for little endian, 0 for big endian
 */

int get_endianness(void)
{
	int num = 1;
	char *c = (char *) &num;

	if (*c)
		return (1);
	return (0);
}
