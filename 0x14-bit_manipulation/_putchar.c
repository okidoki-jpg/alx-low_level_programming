#include <unistd.h>

/**
 * _putchar - display character on stdout
 * @ch: character to display
 *
 * Return: 1 on success
 */

int _putchar(char ch)
{
	return(write(1, &ch, sizeof(char)));
}
