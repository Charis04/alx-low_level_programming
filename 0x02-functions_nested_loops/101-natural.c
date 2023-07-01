#include <stdio.h>

/**
 * _natural - prints the sum of all multiples of 3 and 5 under 1024
 * @n: number to compute up to
 * Return: void
 */

void _natural(int n)
{
	int sum = 0;
	int a;

	for (a = 0; a < n; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			sum += a;
		}
	}
	printf("%d\n", sum);
}

/**
 * main - tests the function
 * Return: 0
 */

int main(void)
{
	_natural(1024);
	return (0);
}

