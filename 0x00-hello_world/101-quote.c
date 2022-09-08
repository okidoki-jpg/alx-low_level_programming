#include <unistd.h>

/**
 * Description: main - The program
 * entry point.
 * Return: 1
 */

int main(void)
{
	/*
	 * print a string without using
	 * printf or puts
	 */
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19",
	sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));

	return (1);
}
