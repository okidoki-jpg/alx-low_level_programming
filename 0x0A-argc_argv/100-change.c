#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the minimum number of coins to make change for an
 * amount of money.
 * @argc: number of program arguements
 * @argv: argument vector (all program arguements)
 *
 * Return: 0 for success, else 1
 */

int main(int argc, char **argv)
{
	unsigned int res = 0, tally = 0, tot, idx;
	int change[] = {25, 10, 5, 2, 1, 0};

	if (argc == 2)
	{
		tot = atoi(argv[1]);
		if (*argv[1] != '-')
		{
			idx = 0;
			while (res != tot)
			{
				if ((res + change[idx]) <= tot)
				{
					res += change[idx];
					tally++;
				}
				else
					idx++;
			}
			printf("%u\n", tally);
		}
		else
			printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

