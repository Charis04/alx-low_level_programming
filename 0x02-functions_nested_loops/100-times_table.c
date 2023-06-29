#include "main.h"

/**
 * times_table - prints the times table from 0 to n
 * @n: number to multiply to
 * Return: void
 */

void print_times_table(int n)
{
	int a, b, c, d, e, f, g, h, i;

	if (n >= 0 && n <= 15)
	{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if (c > 100)
			{
				f = c % 100;
				g = (c - f) / 100;
				if (f > 9)
				{
					h = f % 10;
					i = (f - g) / 10;
					_putchar(',');
					_putchar(' ');
					_putchar(g + '0');
					_putchar(i + '0');
					_putchar(h + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(g + '0');
					_putchar('0');
					_putchar(f + '0');
				}
			}
			else if (c > 9)
			{
				d = c % 10;
				e = (c - d) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(e + '0');
				_putchar(d + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
	}
}
