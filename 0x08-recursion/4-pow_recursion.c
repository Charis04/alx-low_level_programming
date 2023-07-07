#include "main.h"

/**
 * _pow_recursion - returns the value of an int raised to the power of another int
 * @x: the int to be raised
 * @y: the exponent
 * Return: power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	y--;
	return (x * _pow_recursion(x, y));
}
