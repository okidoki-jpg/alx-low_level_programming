#include <stdio.h>

/**
 * pre_exec - execute before main()
 *
 * Return: void
 */

void pre_exec() (void) __attribute__((constructor))
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
