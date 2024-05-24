#include <math.h>
#include "search_algos.h"

/**
 * jump_search - algorithm
 *
 * @array: Pointer to the first element of the sorted array
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index of the value in the array, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int jump_step = sqrt(size);
	int current_i = 0;

	while (current_i < size && array[current_i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", current_i, array[current_i]);

		if (array[current_i] == value)
		{
			return (current_i);
		}

		current_i += jump_step;
	}

	current_i -= jump_step;
	if (current_i >= 0 && current_i < size)
	{
		printf("Value found between indexes ");
		printf("[%d] and [%d]\n", current_i, current_i + jump_step);
		for (int i = current_i; i < current_i + jump_step && i < size; i++)
		{

			printf("Value checked array[%d] = [%d]\n", i, array[i]);

			if (array[i] == value)
			{
				return (i);
			}
		}
	}

	return (-1);
}
