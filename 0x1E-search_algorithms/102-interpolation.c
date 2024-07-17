#include "search_algos.h"

/**
 * interpolation_search - a search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (array[low] < array[high])
	{
		pos = low + (
			((double)(high - low) / (array[high] - array[low])) * (value - array[low])
			);

		if (pos > high)
		{
			printf("Value checked array[%d] is out of range\n", (int)pos);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
		else
			return (pos);
	}
	return (-1);
}
