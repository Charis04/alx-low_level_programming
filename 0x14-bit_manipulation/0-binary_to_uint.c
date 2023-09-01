#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing binary number to be converted
 * Return: unsigned int form of the binary or 0 on failure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x, i, ret = 0, bi = 1;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] > 49 || b[i] < 48)
			return (0);
		if (i > 0)
			bi *= 2;
	}

	for (i = 0; b[i]; i++)
	{
		x = b[i] - '0';
		ret += x * bi;
		bi /= 2;
	}

	return (ret);
}
