#include <stdlib.h>
#include <stdio.h>

/**
 * main - print number of program arguements
 * @argc: number of program arguements
 * @argv: argument vector (all program arguements)
 *
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
