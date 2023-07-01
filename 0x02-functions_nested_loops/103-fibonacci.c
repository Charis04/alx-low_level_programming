#include <stdio.h>

/**
 * main - prints out first 50 fibonacci numbers starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	unsigned long int a = 0, b = 1, c = 0;

	while (a < 4000000)
        {
		c += b;
		b += c;
		if (c % 2 == 0)
			a += c;
		if (b % 2 == 0)
			a += b;
	}
	printf("%lu", a);
	printf("\n");
	return (0);
}

