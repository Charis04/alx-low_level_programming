/**
 * rot13 - encodes a string using rot13 encryption
 * @s: string to be encrypted
 * Return: char
 */

char *rot13(char *s)
{
	int i, i2;
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (i2 = 0; i2 < 52; i2++)
		{
			if (s[i] == alph[i2])
			{
				s[i] = rot[i2];
				break;
			}
		}
	}
	return (s);
}
