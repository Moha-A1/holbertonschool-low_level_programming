#include "main.h"

/**
 * print_triangle - affiche un triangle droit aligné à droite
 * @size: la taille du triangle (nombre de lignes)
 *
 * Si size <= 0, affiche seulement un saut de ligne.
 */
void print_triangle(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 1; i <= size; i++)
    {
    /* afficher les espaces */
for (j = 0; j < size - i; j++)
_putchar(' ');

    /* afficher les # */
for (j = 0; j < i; j++)
_putchar('#');

_putchar('\n');
}
}
