#include <stdio.h>

/**
 * print_array - prints n number of elements of an array
 * @a: array whose elements are to be printed
 * @n: number of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
		printf("%i", a[0]);
	for (i = 1; i < n; i++)
	{
		printf(", %i", a[i]);
	}
	printf("\n");
}
