#include <stdio.h>

/**
 * print_dog - print dog struct attributes
 * @d: dog struct
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d.name)
			print("Name: %s\n", d.name)
		else
			print("Name: (nil)\n")

		if (d.age)
			print("Age: %f\n", d.age)
		else
			print("Age: (nil)\n")

		if (d.owner)
			print("Owner: %s\n", d.owner)
		else
			print("Owner: (nil)\n")
	}
}
