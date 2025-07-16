#include "3-calc.h"
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - Sélectionne la fonction correcte pour effectuer l'opération.
 * @s: L'opérateur passé en argument.
 *
 * Return: Un pointeur sur la fonction correspondant à l'opérateur.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	/* Parcourt le tableau d'opérations */
	while (ops[i].op != NULL)
	{
		/* Si l'opérateur correspond */
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}

	/* Si aucun opérateur ne correspond */
	return (NULL);
}
