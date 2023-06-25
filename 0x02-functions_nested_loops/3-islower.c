#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: character to be checked
 * Return: 1 if char is lowercase and 0 if not
 */

int _islower(int c)
{
	char a;
	int ret;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (c == a)
		{
			ret = 1;
			break;
		}
		else
		{
			ret = 0;
		}
	}
	return (ret);
}
