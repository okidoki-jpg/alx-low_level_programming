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
	int res = 0, len = 0;

	if (argc > 1)
	{
		while (--argc)
		{
			++argv;
			while (*argv)
			{
				if (**argv >= '0' && **argv <= '9')
				{
					++len;
					++*argv;
				}
				else if (**argv == '\0')
				{
					*argv -= len;
					len = 0;
					break;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			res += (int) atoi(*argv);
		}
	}
	printf("%d\n", res);
	return (0);
}
