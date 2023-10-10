#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Perform binary search within a range of the array.
 * @array: Pointer to the first element of the array.
 * @start: Starting index of the range.
 * @end: Ending index of the range.
 * @value: Value to search for.
 *
 * Return: Index of the element if found, -1 otherwise.
 */
int binary_search(int *array, size_t start, size_t end, int value)
{
	size_t left = start;
	size_t right = end;
	size_t mid;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (size_t i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array using exponential search.
 * @array: Pointer to the first element of the array 
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the first occurred value
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t end;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	end = (bound < size - 1) ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, end);

	return binary_search(array, bound / 2, end, value);
}

