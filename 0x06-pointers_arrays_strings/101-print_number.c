#include "main.h"

/** print_number - Prints an integer
 * @n: Int to be printed
 * Return: void
 */

void print_number(int n)
{
	int a, b, c, d, e, f, g, h, i, j;

	if (n > 999)
	{
		a = n % 1000;
		b = (n - a) / 1000;
		_putchar(b + '0');
		if (a > 99)
		{
			c = a % 100;
			d = (a - c) / 100;
			_putchar(d + '0');
			if (c > 9)
			{
				g = c % 10;
				h = (c - g) / 10;
				_putchar(h + '0');
				_putchar(g + '0');
			}
			else
			{
				_putchar('0');
				_putchar(c + '0');
			}
		}
		else if (a > 9)
		{
			i = a % 10;
			j = (a - i) / 10;
			_putchar('0');
			_putchar(j + '0');
			_putchar(i + '0');
		}
		else
		{
			_putchar('0');
			_putchar('0');
			_putchar(a + '0');
		}
	}
	else if (n > 9)
	{
		e = n % 10;
		f = (n - e) / 10;
		_putchar(f + '0');
		_putchar(e + '0');
	}
	else
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
