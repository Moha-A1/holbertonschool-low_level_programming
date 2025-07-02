#include "main.h"
/**
 * sqrt_helper - Fonction auxiliaire récursive pour calculer la racine carrée
 * naturelle.
 * @n: Le nombre dont on cherche la racine carrée.
 *      (natural square root).
 * @i: Le nombre courant à tester comme racine potentielle.
 *
 * Return: La racine carrée naturelle de n, ou -1 si non trouvée.
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}


	if (i * i > n)
	{
		return (-1);
	}


	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Retourne la racine carrée naturelle d'un nombre.
 * @n: Le nombre dont on veut calculer la racine carrée.
 *
 * Return: La racine carrée naturelle de n,
 * ou -1 si n ne possède pas de racine carrée naturelle
 * (ou si n est négatif).
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}



	return (sqrt_helper(n, 1));
}
