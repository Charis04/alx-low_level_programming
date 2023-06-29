#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints to 98 starting with any int
 * @n: the int to start printing from
 * Return: Void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d, ", n);
		}		
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("\n");
}
