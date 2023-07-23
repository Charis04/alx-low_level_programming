#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min num of coins to make change for an ammount of money
 * @argc: number of CL args
 * @argv: CL args
 * Return: 0 if success and 1 if error encountered
 */

int main(int argc, char *argv[])
{
	int money, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		money = atoi(argv[1]);
		if (money < 0)
		{
			printf("0\n");
		}
		else
		{
			while (money > 0)
			{
				if (money >= 25)
					money -= 25;
				else if (money >= 10)
					money -= 10;
				else if (money >= 5)
					money -= 5;
				else if (money >= 2)
					money -= 2;
				else
					money -= 1;
				change++;
			}
			printf("%i\n", change);
		}
		return (0);
	}
}
