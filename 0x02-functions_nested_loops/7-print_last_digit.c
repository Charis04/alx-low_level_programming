#include "main.h"

/**
 * print_last_digit - prints the last digit of any int
 * @n: The int to be printed
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');
	return (last);
}
