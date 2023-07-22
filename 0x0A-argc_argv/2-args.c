#include <stdio.h>

/**
 * main - prints all CL arguements
 * @argc: number of CL args
 * @argv: CL arguements
 * Return: 0
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
