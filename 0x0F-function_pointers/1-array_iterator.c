#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - is a function that executes a pointer function
 * @array: is an array of element input
 * @size: is the size of the array
 * @action: is a pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
