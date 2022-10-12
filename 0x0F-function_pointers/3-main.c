#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int ac, char **av)
{
	char *s;
	int a, b, res;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(av[1]);
	b = atoi(av[3]);
	s = av[2];
	if (s[1])
	{
		printf("Error\n");
		exit(99);
	}

	res = (*get_op_func(s))(a, b);

	if (!res && res != 0)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", res);
	return (0);
}
