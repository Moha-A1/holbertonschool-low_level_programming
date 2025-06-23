#include "main.h"

/**
 * _islower - Vérifie si un caractère est en minuscule.
 * @c: Le caractère à tester (en int).
 *
 * Return: 1 si minuscule, 0 sinon.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
