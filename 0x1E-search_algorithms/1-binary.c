#include "search_algos.h"

void print_array(int *arr, size_t size);

/**
 * binary_search - search an array using binary search
 * @array: pointer to first element of array to be searched
 * @size: size of the array to be searched
 * @value: value being searched for in the array
 * Return: location of the value if found and -1 if not
*/

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, mid = (l + r) / 2;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		print_array(&array[l], r - l + 1);
		if (array[mid] == value)
			return ((int)mid);
		else if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
		mid = l + r / 2;
	}
	return (-1);
}

/**
 * print_array - prints the elements of an array
 * @arr: pointer to first element of array to be printed
 * @size: size of the array
*/

void print_array(int *arr, size_t size)
{
	size_t i = 0;

	if (arr == NULL)
		return;

	printf("Searching in array: %d", arr[i]);
	for (i = 1; i < size; i++)
	{
		printf("i is %lu and size is %lu", i, size);
		printf(", %d", arr[i]);
	}
	printf("\n");
}
