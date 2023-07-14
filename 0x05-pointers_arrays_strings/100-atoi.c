/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: an int if there are numbers in the string and 0 if there are non
 */

int _atoi(char *s)
{
	int mul = 10, ret = 0, i = 0, sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] == 45)
		{
			sign *= -1;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			ret = (ret * mul) + (s[i] - 48);
		}
		i++;
	}
	return (ret * sign);
}
