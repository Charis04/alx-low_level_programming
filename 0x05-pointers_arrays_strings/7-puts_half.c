#include "main.h"

/**
 * puts_half - prints the latter half of a string
 * @str: string whose latter half is to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int half, len = 0;

	while (str[len] != '\0')
		len++;
	half = (len + 1) / 2;
	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
