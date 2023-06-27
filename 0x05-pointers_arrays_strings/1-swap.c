#include <stdio.h>

/**
 * swap_int - Swaps the values of 2 ints
 * @a: First int to be swapped
 * @b: Second int to be swapped
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
