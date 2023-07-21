#include "main.h"

/**
 * _isalpha - checks alphabet for alphabetic char
 * @c: char to be checked
 * Return: 1 if c is a letter and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
