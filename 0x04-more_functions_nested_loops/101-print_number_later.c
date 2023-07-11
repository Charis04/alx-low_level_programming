#include "main.h"

/**
 * print_number - prints an int out
 * @n: int to be printed
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
		_putchar(n / 1000 + '0');
		n %= 1000;
		if (n < 100)
		{
			_putchar(
