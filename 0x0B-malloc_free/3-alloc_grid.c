#include"main.h"
#include <stdlib.h>
/**
 * alloc_grid - is a function that creates 2d array
 * @width: is the width of the array
 * @height: is the height of the array
 * Return: a pointer to the 2d array, or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (malloc(sizeof(int) * width));
		if (arr[i] == 0)
		{
			while (i >= 0)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
