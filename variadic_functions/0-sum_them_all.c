#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Calcule la somme d'un nombre variable d'arguments entiers.
 * @n: Le nombre d'arguments entiers à additionner.
 * @...: Les arguments variables (les entiers à additionner).
 *
 * Return: La somme totale de tous les arguments, ou 0 si n est 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{

		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
