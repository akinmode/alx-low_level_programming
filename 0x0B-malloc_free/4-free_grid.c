#include <stdlib.h>

/**
* free_grid -  returns a pointer to a
* 2 dimensional array of integers.
* @grid: widthh of the array
* @height: height of the array
* Return: no value to return
*/

void free_grid(int **grid, int height)
{
	while (height--)
		free(grid[height]);
	free(grid);
}
