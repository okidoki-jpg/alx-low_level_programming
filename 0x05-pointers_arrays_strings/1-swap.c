/**
 * swap_int - swap two integer pointer values
 * @a: first parameter
 * @b: second parameter
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int *tmp = *a;
	*a = *b;
	*b = *tmp;
}
