#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	int last = n % 10;

	printf("Last digit of %d is %d and is ", n, last);
	if (last > 5)
		printf("greater than 5\n");
	else if (last == 0)
		printf("0\n");
	else if (last < 6 && last != 0)
		printf("less than 6 and not 0\n");
	return (0);
}
