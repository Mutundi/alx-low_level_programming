#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
    // Check for invalid dimensions
    if (width <= 0 || height <= 0)
    {
        return NULL;
    }

    // Allocate memory for the grid (array of pointers to int arrays)
    int **grid = (int **)malloc(height * sizeof(int *));
    if (grid == NULL)
    {
        return NULL; // Memory allocation failed
    }

    // Allocate memory for each row and initialize elements to 0
    for (int i = 0; i < height; i++)
    {
        grid[i] = (int *)malloc(width * sizeof(int));
        if (grid[i] == NULL)
	{
            // Clean up previously allocated memory before returning NULL
            for (int j = 0; j < i; j++)
	    {
                free(grid[j]);
            }
            free(grid);
            return NULL; // Memory allocation for this row failed
        }

        // Initialize elements to 0
        for (int j = 0; j < width; j++) {
            grid[i][j] = 0;
        }
    }

    return grid; // Return a pointer to the 2D array
}
