#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Libère une grille bidimensionnelle d'entiers.
 * @grid: Le pointeur vers la grille 2D à libérer.
 * @height: La hauteur (nombre de lignes) de la grille.
 *
 * Return: Rien (void).
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
