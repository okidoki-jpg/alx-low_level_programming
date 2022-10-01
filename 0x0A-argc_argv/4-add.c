#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: number of program arguements
 * @argv: argument vector (all program arguements)
 *
 * Return: 0 for success, else 1
 */

int main(int argc, char **argv)
{
	int res = 0;

	if (argc > 1)
	{
		while (--argc)
		{
			argv++;
			if (**argv >= '0' && **argv <= '9')
			{
				res += (int) atoi(*argv);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", res);
	return (0);
}
