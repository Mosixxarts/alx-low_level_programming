#include "main.h"

/**
 * freee_grid - allocates a grid, makes space and free
 * @grid: takes in width of grid
 * @height: height of grid
 * Return: free grid
 */

void free_grid(int **grid, int height);
{
	int i;

	for  (i = 0; i < height; i++)
	{
		free(grig[i]);
	}
	free(grid);
}
