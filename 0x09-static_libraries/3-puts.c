#include "main.h"

/**
 * _puts - Prints a str
 * @str: The str to print
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
