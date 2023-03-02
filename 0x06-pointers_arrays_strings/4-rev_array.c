#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the first element of the array.
 * @n: Number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	if (n <= 1)
	return;

	for (i = 0; i < n / 2; i++)
{
	tmp = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = tmp;
}
}

