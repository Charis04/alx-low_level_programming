#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number whose bit is to be checked
 * @index: index
 * Return: value at given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check = 1UL << index;

	if (n & check)
		return (1);
	else
		return (0);
}
