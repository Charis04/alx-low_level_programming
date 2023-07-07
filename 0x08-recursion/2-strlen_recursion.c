#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string who's length is to be returned
 * Return: len
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
	{
		return (0);
	}
	n++;
	s++;
	return (n + _strlen_recursion(s));
}

