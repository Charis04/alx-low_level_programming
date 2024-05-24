#include "search_algos.h"

/**
 * binary_search - search an array using binary search
 * @array: pointer to first element of array to be searched
 * @size: size of the array to be searched
 * @value: value being searched for in the array
 * Return: location of the value if found and -1 if not
*/

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, mid, i;

	if (array == NULL || size == 0)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: %d", array[l]);
		for (i = l + 1; i <= r; i++)
		{
			printf(", %d", array[i]);
		}
		printf("\n");
		mid = l + (r - l) / 2;
		if (array[mid] == value)
		{
			return ((int)mid);
		}
		else if (array[mid] < value)
		{
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}
	}
	return (-1);
}
