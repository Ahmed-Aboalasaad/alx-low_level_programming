#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D grid previously created by your alloc_grid()
 *
 * @grid: pointer to the 2D grid
 * @height: the grid height
 * Return: nothging
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
