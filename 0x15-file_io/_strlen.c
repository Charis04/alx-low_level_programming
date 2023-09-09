#include "main.h"

/**
 * _strlen - gets the length of a string
 * @str: the string
 * Return: length of the string
 */

size_t _strlen(char *str)
{
	size_t len = 0;

	while (str[len])
		len++;
	return (len);
}
