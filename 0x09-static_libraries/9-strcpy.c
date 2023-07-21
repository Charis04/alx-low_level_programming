#include "main.h"

/**
 * _strcpy - copies one string into another
 * @src: source of copy
 * @dest: destination of copy
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
		len++;
	for (i = 0; i <= len; i++)
		dest[i] = src[i];
	return (dest);
}
