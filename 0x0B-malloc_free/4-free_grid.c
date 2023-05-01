#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*Red-Rim*/
/**
 * free_grid -  frees a 2 dim grid previously created by your alloc_grid
 * @grid: pointer to the 2 dim grid
 * @height: height of the grid
 * Return: nothing
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
