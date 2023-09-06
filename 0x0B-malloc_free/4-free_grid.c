#include "main.h"
#include "stdlib.h"

/**
 * free_grid - frees a 2 dimensional grid.
 * @grid: the matrix.
 * @height: the rows.
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int m;

	if (grid != NULL)
	{
		/** Free memory allocated for the rows **/
		for (m = 0; m < height; m++)
		{
			free(grid[m]);
		}
		/** Free memory allocated for the grid **/
		free(grid);
	}
}
