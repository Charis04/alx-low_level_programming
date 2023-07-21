#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: Input
 * @src: Output
 * @n: input
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
