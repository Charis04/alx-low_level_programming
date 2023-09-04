#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: pointer to the number whose bit is to be set
 * @index: index
 * Return: 1 on success and -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check = 1UL << index;

	if (index > (sizeof(1UL) * 8 - 1))
		return (-1);
	*n |= check;
	return (1);
}
