#include "main.h"

/**
 * _strspn - Calcule la longueur du segment initial d'une chaîne.
 * @s: La chaîne de caractères principale à analyser.
 * @accept: La chaîne de caractères contenant l'ensemble des caractères
 * autorisés.
 *
 * Return: Le nombre d'octets (caractères) dans le segment initial de 's'
 * qui sont exclusivement composés de caractères trouvés dans 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int c = 0;
	int f;
	char *a;

	while (*s != '\0')
	{
		f = 0;
		a = accept;


		while (*a != '\0')
		{
			if (*s == *a)
			{
				f = 1;
				break;
			}
			a++;
		}

		if (f == 1)
		{
			c++;
			s++;
		}
		else
		{
			break;
		}
	}

	return (c);
}
