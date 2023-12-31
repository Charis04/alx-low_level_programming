#include "main.h"

/**
 * factorial - returns the factorial of any given number
 * @n: number who's factorial is to be computed
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
