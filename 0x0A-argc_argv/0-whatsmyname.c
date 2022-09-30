#include <stdlib.h>

/**
 * main - print the program's name
 * @argc: number of program arguements
 * @argv: argument vector (all program arguements)
 *
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	printf("%s\n", *argv[0]);
	return (0);
}
