#include "search_algos.h"


/**
 * linear_search - Searches an array linearly
 *
 * @array: Pointer to the integer array to search
 * @size: Size of the array
 * @value: The value to search for
 *
 * Return: The index of the first occurrence of the value in the array,
 *          or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}
	return (-1);
}
