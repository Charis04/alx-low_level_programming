/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: sum of the numbers
 * @size_r: size of the array to be returned
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	unsigned long long num1 = 0, num2 = 0, units = 1, sum, a, tempsum;
	int index1 = 0, index2 = 0, i = 0, size = 0;

	/* store n1 and n2 in ints num1 and num2 then add them to get sum */
	while (n1[index1] != '\0')
	{
		num1 = num1 * 10 + (n1[index1] - 48);
		index1++;
	}
	while (n2[index2] != '\0')
	{
		num2 = num2 * 10 + (n1[index2] - 48);
		index2++;
	}
	sum = num1 + num2;
	tempsum = sum;

	/* get potential size of sum and store sum in array given as arg */
	while (tempsum != 0)
	{
		tempsum /= 10;
		units *= 10;
		size++;
	}
	if (size >= size_r)
	{
		return (0);
	}
	else
	{
		units /= 10;
		while (units >= 1)
		{
			a = sum % units;
			r[i] = sum / units + 48;
			units /= 10;
			i++;
			sum = a;
		}
		return (r);
	}
}
