#include <stdio.h>

/**
 * main - print program arguements
 * @argc: number of program arguements
 * @argv: argument vector (all program arguements)
 *
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		while(argc--)
		{
			printf("%s\n", *argv++);
		}
	}
	return (0);
}
