#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Description: prints 10 lines, each line containing the products of the
 * row number times 0 to 9, formatted with commas, spaces, and aligned numbers.
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (j == 0)
			{
				_putchar('0' + product);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
					_putchar(' ');
				if (product >= 10)
				{
					_putchar('0' + (product / 10));
					_putchar('0' + (product % 10));
				}
				else
				{
					_putchar('0' + product);
				}
			}
		}
		_putchar('\n');
	}
}
