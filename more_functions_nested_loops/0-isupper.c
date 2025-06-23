#include "main.h"

/**
 * _isupper - Vérifie si un caractère est une majuscule
 * @c: le caractère à tester (représenté par un int ASCII)
 *
 * Return: 1 si c est une majuscule, 0 sinon
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
