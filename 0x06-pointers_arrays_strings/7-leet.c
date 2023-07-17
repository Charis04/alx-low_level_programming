/**
 * leet - converts string to leet form
 * @s: string to be converted
 * Return: char
 */

char *leet(char *s)
{
	int i, i2;
	char *chars = "aeotl", *leet = "43071";

	for (i = 0; s[i]; i++)
	{
		for (i2 = 0; i2 < 5; i2++)
		{
			if (s[i] == chars[i2] || s[i] == chars[i2] - 32)
				s[i] = leet[i2];
		}
	}
	return (s);
}
