#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatène deux chaînes de caractères.
 * @s1: La première chaîne.
 * @s2: La deuxième chaîne.
 * @n: Le nombre d'octets de s2 à concaténer.
 *
 * Return: Un pointeur vers la nouvelle chaîne, ou NULL en cas d'échec.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	new_str = malloc(len1 + n + 1);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	for (j = 0; j < n; j++)
		new_str[len1 + j] = s2[j];

	new_str[len1 + j] = '\0';


	return (new_str);
}
