#include "main.h"

/**
 * print_line - Draws a straight line using '_'
 * @n: Number of times '_' is printed
 */
void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
