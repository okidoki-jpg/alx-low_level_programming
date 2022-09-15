#include <stdio.h>

/**
 * main - print "FizzBuzz for multiples
 * of 3 & 5, "Fizz" for multiples of 3
 * and "Buzz" for multiples of 5
 *
 * Return: 0
 */

int main(void)
{
	int n = 0;

	while (n++ < 100)
	{
		if (n % 15 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);

		if (n < 100)
			putchar(' ');
		else
			putchar(10);
	}
	return (0);
}
