#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number who binary representatio is to be printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int bit, start = 0;
	unsigned long int check = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (check)
	{
		bit = (check & n) ? 1 : 0;
		if (bit)
			start = 1;
		if (start)
			_putchar(bit + '0');
		check >>= 1;
	}
}
