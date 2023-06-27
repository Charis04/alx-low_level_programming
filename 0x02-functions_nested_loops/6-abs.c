#include "main.h"

/**
 * _abs - Computes the absolute value of an int
 * Return: Absolute value
 */

int _abs(int i)
{
	int ret;

	if (i < 0)
	{
		ret = i *-1;
	}
	else
	{
		ret = i * 1;
	}
	return (ret);
}
