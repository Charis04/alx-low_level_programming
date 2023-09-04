#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: pointer to number to be manipulated
 * @index: position to be changed
 * Return: ! on success and -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check = 1UL << index;

	if (index > (sizeof(1UL) * 8 - 1))
		return (-1);

	*n &= ~check;
	return (1);
}
