#include "main.h"

/**
 * print_sign - Affiche le signe d’un nombre
 * @n: nombre à tester
 *
 * Return: 1 si positif, 0 si zéro, -1 si négatif
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
