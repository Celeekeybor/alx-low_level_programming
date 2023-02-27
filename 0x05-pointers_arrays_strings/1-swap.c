#include <stdio.h>

/**
 * swap_int - Swap two integers
 * @a: First integer to be swapped
 * @b: Second integer to be swapped
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
