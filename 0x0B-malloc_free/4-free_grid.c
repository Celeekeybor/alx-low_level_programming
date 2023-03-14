#include "main.h"
#include <stdlib.h>
/**
 * free_grid - is a function that frees memory from a 2d grid
 * @grid: is the pointer to the grid
 * @height: is the height of the array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
