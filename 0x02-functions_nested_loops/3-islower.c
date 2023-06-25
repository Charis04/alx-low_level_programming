#include "main.h"

/**
 * _islower - checks if a character is lower case
 * Return ; Always 0
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
