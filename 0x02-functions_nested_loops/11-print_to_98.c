#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints to 98 starting with any int
 * @n: the int to start printing from
 * Return: Void
 */

void print_to_98(int n)
{
	int e = 98;

	if (n <= e)
	{
		for (; n < e; n++)
		{
			printf("%d, ", n);
		}
		printf("%d", e);
	}
	else
	{
		for (; n > e; n--)
		{
			printf("%d, ", n);
		}
		printf("%d", e);
	}
	printf("\n");
}
