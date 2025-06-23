#include "main.h"

/**
 * _isalpha - Vérifie si un caractère est une lettre.
 * @c: Le caractère à tester.
 *
 * Return: 1 si lettre (maj ou min), 0 sinon.
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
return (1);
else
return (0);
}
