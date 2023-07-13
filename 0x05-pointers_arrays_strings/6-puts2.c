#include "main.h"

/**
 * puts2 - prints everyother character of a string starting with
 * the first character
 * @str: string whose characters are to be printed
 * return: void
 */

void puts2(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
		len++;

	for (i = 0; i <= len; i += 2)
	{
		if (str[i] != '\0')
			_putchar(str[i]);
	}
	_putchar('\n');
}
