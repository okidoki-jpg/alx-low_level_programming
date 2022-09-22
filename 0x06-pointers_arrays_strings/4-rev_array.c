#include "main.h"

/**
 * reverse_array - reverse a string
 * @a: array to reverse
 * @n: length of array
 * *front: points to values from the front
 * *end: points to values from the end
 * tmp: temporarily holds end value during switch
 */

void reverse_array(int *a, int n)
{
	int end = n, front, tmp;

	/**
	 * move front index foward and swap values
	 */

	for (front = 0; front < end; front++)
	{
		tmp = a[end];
		a[end] = a[front];
		a[front] = tmp;

		/**
		 * move end index back
		 */

		end--;
	}
}
