#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - which allocates memory
 * for a 2D array of integers.
 * @height: matrix's row.
 * @width: matrix's column.
 *
 * Return: a pointer to the 2D array.
 */

int **alloc_grid(int width, int height)
{
	int m, n;
	int **matrix;

	if (width <= 0 || height <= 0)
		return (NULL);

	/** Allocate memory for matrix's rows **/
	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);

	/** Allocate memory for each row **/
	for (m = 0; m < height; m++)
	{
		matrix[m] = (int *)malloc(width * sizeof(int));
		if (matrix[m] == NULL)
		{
			/** Free if memory allocated fails **/
			for (n = 0; n < m; n++)
			{
				free(matrix[n]);
			}
			free(matrix);
			return (NULL);
		}
		/** Initialize elements to 0 **/
		for (n = 0; n < width; n++)
		{
			matrix[m][n] = 0;
		}
	}
	/** return a pointer to the 2D array **/
	return (matrix);
}
