#include <stdio.h>
#include "3-calc.h"

/**
 * main - begining of calculator with some error checking
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 is successful
 */

int main(int ac, char **av)
{
	char *s;
	int a, b, res;
	int (*op_t)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(av[1]);
	b = atoi(av[3]);
	s = av[2];

	op_t = get_op_func(s);

	if (!op_t)
	{
		printf("Error\n");
		exit(99);
	}

	res = op_t(a, b);
	printf("%d\n", res);
	return (0);
}
