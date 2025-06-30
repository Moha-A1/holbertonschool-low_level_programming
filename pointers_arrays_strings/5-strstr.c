#include "main.h"

/**
 * _strstr - Localise la première occurrence d'une sous-chaîne.
 * @haystack: Chaîne principale.
 * @needle: Sous-chaîne à localiser.
 *
 * Return: Pointeur vers le début de la sous-chaîne trouvée,
 * ou (char *)0 si non trouvée.
 */
char *_strstr(char *haystack, char *needle)
{
	char *n_ptr;
	char *temp_h;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		temp_h = haystack;
		n_ptr = needle;

		while (*n_ptr != '\0' && *temp_h == *n_ptr)
		{
			temp_h++;
			n_ptr++;
		}

		if (*n_ptr == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return ((char *)0);
}
