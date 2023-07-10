#include "main.h"

/**
 * print_line - prints a line
 * @n: number of "_" characters used to print the line
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
