/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: an int if there are numbers in the string and 0 if there are non
 */

int _atoi(char *s)
{
	int end = 0, ret = 0, i = 0, sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] == 45)
		{
			sign *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			end = 1;
			ret = (ret * 10) + (s[i] - 48);
			i++;
		}
		if (end == 1)
			break;
		i++;
	}
	ret *= sign;
	return (ret);
}
