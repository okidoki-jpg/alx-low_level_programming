#include <stdio.h>

/**
 * Description: main - The program
 * entry point
 * Return: 0 to indicate success
 */

int main(void)
{
	/*
	 * display the size of various
	 * data types on the stdout
	 */
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}
