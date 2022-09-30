#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers from argv
 * @argc: number of program arguements
 * @argv: argument vector (all program arguements)
 *
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (int) atoi(argv[1]) * (int) atoi(argv[2]));
	return (0);
}
