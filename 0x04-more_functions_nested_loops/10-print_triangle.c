#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: height of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int x;
	int y = size;
	int z;

	if (size > 0)
	{
		for (z = 1; z <= size; z++, y--)
		{
			for (x = y - 1; x > 0; x--)
			{
				_putchar(' ');
			}
			for (x = 0; x < z; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
