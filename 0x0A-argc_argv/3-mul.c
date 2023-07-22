#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguements
 * @argv: CL args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc < 3)
	{
		printf("Error");
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", sum);
	}
	return (0);
}
