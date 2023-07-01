#include <stdio.h>

/** 
 * main - prints out first 50 fibonacci numbers starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	long unsigned int a, b = 1, c = 0;

	for (a = 0; a < 25; a++)
	{

		c += b;
		printf("%lu, ", c);
		b += c;
		printf("%lu, ", b);
	}
	printf("\n");
	return (0);
}
