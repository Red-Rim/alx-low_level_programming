#include "main.h"
#include <stdlib.h>

/*Red-Rim*/
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional, array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
			if (grid[i] == NULL)
			{
				for (j = 0; j < i; j++)
				free(grid);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				grid[i][j] = 0;
	}
		return (grid);
		}
