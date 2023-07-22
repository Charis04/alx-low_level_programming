#include <stdio.h>

/**
 * main - prints the number of arguements
 * @argc: number of CL arguements
 * @argv: CL arguements
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc > 0)
		printf("%i\n", argc - 1);
	return (0);
}
