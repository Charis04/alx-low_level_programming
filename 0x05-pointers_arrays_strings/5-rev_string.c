#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @*s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, i;
	char temp;


	while (*(s + len) != '\0')
		len++;
	i = len - 1;

	for (; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
