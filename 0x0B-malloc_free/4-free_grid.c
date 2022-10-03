
#include "main.h"
#include <stdlib.h>
/**
 *free_grid - function that frees a 2 dimensional grid previously created by your
 *@grid: pointer to pointer
 *@height:height of grid
 *Return:void
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
