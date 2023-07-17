#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Int to be printed
 * Return: void
 */

void print_number(int n)
{
	int a, b, c;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	if (n > 999)
	{
		a = n % 1000;
		_putchar(n / 1000 + '0');
		b = a % 100;
		_putchar(a / 100 + '0');
		c = b % 10;
		_putchar(b / 10 + '0');
		_putchar(c + '0');
	}
	else if (n > 99)
	{
		a = n % 100;
		_putchar(n / 100 + '0');
		b = a % 10;
		_putchar(a / 10 + '0');
		_putchar(b + '0');
	}
	else if (n > 9)
	{
		a = n % 10;
		_putchar(n / 10 + '0');
		_putchar(a + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}
