#include "main.h"

/**
 * more_numbers - prints numbers 1 to 14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
				_putchar('1');
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
