#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @*s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	char temp[9];
	int a = 0, n, b;


	while (*(s + i) != '\0')
		i++;
	n = i - 1;

	for (; n >= 0; n--)
	{
		temp[a] = s[n];
		a++;
	}
	for (b = 0; b < i; b++)
		s[b] = temp[b];
}
