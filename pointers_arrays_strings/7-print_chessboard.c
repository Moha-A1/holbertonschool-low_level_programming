#include "main.h"

/**
 * print_chessboard - Imprime le plateau d'échecs.
 * @a: Le tableau 2D représentant le plateau d'échecs (8x8).
 *
 * Return: Rien (void).
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
