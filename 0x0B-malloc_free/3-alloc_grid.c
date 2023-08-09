#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * each element is initialized to 0
 *
 * @width: grid width
 * @height: grid height
 * Return: Null on failure or zero height or width..
 * otherwise, pointer to the grid
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width == 0 || height == 0)
		return (NULL);

	/* allocation */
	grid = (int **)malloc(height * sizeof(int));
	if (grid == NULL)
		return (NULL);

	/* further allocation & initialization */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int *));
		if (grid[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
